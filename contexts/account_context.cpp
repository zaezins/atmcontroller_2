//
//  account_context.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#include "account_context.hpp"


account_context::account_context()
: lst()
{
    
}

void account_context::load()
{
    this->generate_random_data();
}

void account_context::generate_random_data()
{
    this->lst.push_back( make_shared<account_model>("user1","woori", "1234"));
    this->lst.push_back( make_shared<account_model>("user1", "sc", "2345"));
    this->lst.push_back( make_shared<account_model>("user1", "city", "1212"));
    this->lst.push_back( make_shared<account_model>("user2", "kb", "3434"));
    this->lst.push_back( make_shared<account_model>("user2", "hana", "0098"));
}
vector<shared_ptr<account_model>> account_context::get_data()
{
    return this->lst;
}
