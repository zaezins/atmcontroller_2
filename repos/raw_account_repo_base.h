//
//  raw_account_repo_base.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef raw_account_repo_base_h
#define raw_account_repo_base_h

#include "raw_account_model.hpp"


struct raw_account_repo_base
{
    virtual vector<shared_ptr<raw_account_model>> find_all() = 0;
    virtual shared_ptr<raw_account_model> find_one(string user_name, string bank_name, string bank_account) = 0;

    virtual ~raw_account_repo_base(){};
};

#endif /* raw_account_repo_base.h */
