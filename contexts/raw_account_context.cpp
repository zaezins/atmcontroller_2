//
//  raw_account_context.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#include "raw_account_context.hpp"



raw_account_context::raw_account_context()
: lst()
{
    
}

void raw_account_context::load()
{
    this->generate_random_data();
}

void raw_account_context::generate_random_data()
{
    this->lst.push_back( make_shared<raw_account_model>("user1","woori", "1234"));
    this->lst.push_back( make_shared<raw_account_model>("user1", "sc", "2345"));
    this->lst.push_back( make_shared<raw_account_model>("user1", "city", "1212"));
    this->lst.push_back( make_shared<raw_account_model>("user2", "kb", "3434"));
    this->lst.push_back( make_shared<raw_account_model>("user2", "hana", "0098"));
}
vector<shared_ptr<raw_account_model>> raw_account_context::get_data()
{
    return this->lst;
}
