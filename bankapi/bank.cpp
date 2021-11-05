//
//  bank.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#include "bank.hpp"
#include "card_model.hpp"

#include <random>
#include <iostream>


bank::bank()
:cont_factory(make_shared<context_factory>()),
repo_factory(make_shared<repository_factory>())
{
    this->load();
}

string bank::join(string name, string bank, string account)
{
    static const string delimiter = " / ";
    
    return name + delimiter + bank + delimiter + account;
}

bool bank::find_account(string name, string bank, string account_num)
{
    string key = this->join(name, bank, account_num);
    auto iter = this->card_map.find(key);
    return (iter != this->card_map.end());
}

void bank::load()
{
    string name = "default";
    auto usr_context = cont_factory->get_user_context(name);
    this->usr_repo = repo_factory->create_user_repo(name, usr_context);
    
    map<string/*usr_name*/, map<string/*bank_name*/, set<string>/*account_num*/> > m;
    for(const auto & iter : this->usr_repo->find_all())
    {
        for(const auto & i : iter->get_lst())
        {
            auto & set = m[i->get_owner()][i->get_bank_name()];
            if(set.find(i->get_account_number()) == set.end())
            {
                set.insert(i->get_account_number());
            }
        }
    }
    random_device rd;
    mt19937 gen(rd());
    std::normal_distribution<double> dist(0, 1);
    for(auto i = m.begin(); i != m.end(); i++)
    {
        for(auto j = i->second.begin(); j != i->second.end(); j++)
        {
            auto set = j->second;
            for(auto s : set)
            {
                string key = this->join(i->first, j->first, s);
                
                int cash = std::round(dist(gen) * 1000000);
                this->card_map[key] = make_shared<cash_model>(abs(cash));
            }
        }
    }
}

bool bank::is_pin_valid(string pin)
{
    random_device rd;
    mt19937 gen(rd());
    std::normal_distribution<double> dist(0, 1);
    return abs(std::round(dist(gen))) < 0.8;
}

bool bank::withdraw(string name, string bank, string account_num, int val)
{
    string key = this->join(name, bank, account_num);
    if(this->card_map.find(key) != this->card_map.end())
    {
        this->card_map[key]->withdraw(val);
        return true;
    }
    else
    {
        throw exception();
    }
}

bool bank::deposit(string name, string bank, string account_num, int val)
{
    string key = this->join(name, bank, account_num);
    if(this->card_map.find(key) != this->card_map.end())
    {
        this->card_map[key]->deposit(val);
        return true;
    }
    else
    {
        throw exception();
    }
}

int bank::get_balance(string name, string bank, string account_num)
{
    string key = this->join(name, bank, account_num);
    if(this->card_map.find(key) != this->card_map.end())
    {
        return this->card_map[key]->get_current();
    }
    else
    {
        throw exception();;
    }
}
