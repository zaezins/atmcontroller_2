//
//  context_factory.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#include "context_factory.hpp"




shared_ptr<user_context> context_factory::get_user_context(string s)
{
    if(s == "default")
    {
        return make_shared<user_context>();
    }
    else
    {
        throw exception();
    }
}

shared_ptr<account_context> context_factory::get_account_context(string s)
{
    if(s == "default")
    {
        return make_shared<account_context>();
    }
    else
    {
        throw exception();
    }
}


shared_ptr<raw_account_context> context_factory::get_raw_account_context(string s)
{
    if(s == "default")
    {
        return make_shared<raw_account_context>();
    }
    else
    {
        throw exception();
    }
}
