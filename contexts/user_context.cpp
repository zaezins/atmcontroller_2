//
//  user_context.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#include "user_context.hpp"


user_context::user_context()
{
    this->load();
}


void user_context::load()
{
    this->generate_random_data();
}


/*
 
 
 string owner;
 string bank_name;
 string account_number;
 */

void user_context::generate_random_data()
{
    map<string, map<string, vector<string>> > m;
    m["user1"]["woori"].push_back("1234");
    m["user1"]["sc"].push_back("2345");
    m["user1"]["city"].push_back("1212");
    m["user2"]["kb"].push_back("3434");
    m["user2"]["hana"].push_back("0098");
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        for(auto inner = iter->second.begin(); inner != iter->second.end(); inner++)
        {
            const auto & user = iter->first;
            const auto & bank = inner->first;
            auto usr = make_shared<user_model>(user);
            for(auto acc : inner->second)
            {
                usr->add_account(make_shared<account_model>(user, bank, acc));
            }
            lst.push_back(usr);
        }
    }
}


vector<shared_ptr<user_model>> user_context::get_data()
{
    return this->lst;
}
