//
//  user.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#include "user_model.hpp"



user_model::user_model(string arg)
: name(arg)
{
    
}


void user_model::add_account(shared_ptr<account_model> & acc)
{
    this->lst.push_back(acc);
}


void user_model::add_account(shared_ptr<account_model> && acc)
{
    this->lst.emplace_back(acc);
}
