//
//  account_repo.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#include "account_repo_impl.hpp"
#include <map>


account_repo_impl::account_repo_impl(shared_ptr<account_context>& arg)
: context(arg)
{
    
}

vector<shared_ptr<account_model>> account_repo_impl::find_all()
{
    return this->context->get_data();
}
shared_ptr<account_model> account_repo_impl::find_one(string bank_name, string bank_account)
{
    throw exception();
}
