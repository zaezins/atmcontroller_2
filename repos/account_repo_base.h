//
//  account_repo_base.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef account_repo_base_h
#define account_repo_base_h

#include <vector>
#include <string>
#include "account_model.hpp"

using namespace std;

struct account_repo_base
{
    virtual vector<shared_ptr<account_model>> find_all() = 0;
    virtual shared_ptr<account_model> find_one(string bank_name, string bank_account) = 0;

    virtual ~account_repo_base(){};
};

#endif /* account_repo_base_h */
