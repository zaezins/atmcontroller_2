//
//  raw_account_repo_impl.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#include "raw_account_repo_impl.hpp"

#include <map>

raw_account_repo_impl::raw_account_repo_impl(shared_ptr<raw_account_context> & arg)
: context(arg)
{
    
}

vector<shared_ptr<raw_account_model>> raw_account_repo_impl::find_all()
{
    return this->context->get_data();
}

shared_ptr<raw_account_model> raw_account_repo_impl::find_one(string user_name, string bank_name, string bank_account)
{
    shared_ptr<raw_account_model> p = nullptr;
    for(auto iter : this->context->get_data())
    {
        if((iter->get_user_name() == user_name)
           && (iter->get_bank_name() == bank_name)
           && (iter->get_account_number() == bank_account))
        {
            p = iter;
            break;
        }
    }
    return p;
}
