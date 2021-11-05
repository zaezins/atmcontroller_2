//
//  account_repo_impl.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef account_repo_impl_hpp
#define account_repo_impl_hpp

#include <stdio.h>
#include "account_repo_base.h"
#include "account_context.hpp"


class account_repo_impl : public account_repo_base
{
    shared_ptr<account_context> context;
public:
    account_repo_impl(shared_ptr<account_context>& arg);
    virtual vector<shared_ptr<account_model>> find_all() override;
    virtual shared_ptr<account_model> find_one(string bank_name, string bank_account) override;
    
};



#endif /* account_repo_impl_hpp */
