//
//  repository_factory.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#include "repository_factory.hpp"

#include "user_repo_impl.hpp"
#include "raw_account_repo_impl.hpp"
#include "account_repo_impl.hpp"


static const string sdefault = "default";

shared_ptr<user_repo_base> repository_factory::create_user_repo(string s,
                                                                shared_ptr<user_context> & context)
{
    shared_ptr<user_repo_base> p = nullptr;
    if(s == sdefault)
    {
        p = make_shared<user_repo_impl>(context);
    }
    return p;
}

shared_ptr<account_repo_base> repository_factory::create_account_repo(string s,
                                                                      shared_ptr<account_context> & context)
{
    shared_ptr<account_repo_base> p = nullptr;
    if(s == sdefault)
    {
        p = make_shared<account_repo_impl>(context);
    }
    return p;
}


shared_ptr<raw_account_repo_base> repository_factory::create_raw_account_repo(string s,
                                                                              shared_ptr<raw_account_context> & context)
{
    shared_ptr<raw_account_repo_base> p = nullptr;
    if(s == sdefault)
    {
        p = make_shared<raw_account_repo_impl>(context);
    }
    return p;
}
