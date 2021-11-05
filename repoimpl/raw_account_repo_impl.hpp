//
//  raw_account_repo_impl.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef raw_account_repo_impl_hpp
#define raw_account_repo_impl_hpp

#include <stdio.h>
#include "raw_account_repo_base.h"
#include "raw_account_model.hpp"
#include <vector>
#include <memory>
#include "raw_account_context.hpp"


using namespace std;

class raw_account_repo_impl : public raw_account_repo_base
{
    shared_ptr<raw_account_context> context;
public:
    raw_account_repo_impl(shared_ptr<raw_account_context> & arg);
    virtual vector<shared_ptr<raw_account_model>> find_all() override;
    virtual shared_ptr<raw_account_model> find_one(string username, string bank_name, string bank_account) override;
};


#endif /* raw_account_repo_impl_hpp */
