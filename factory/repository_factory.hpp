//
//  repository_factory.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#ifndef repository_factory_hpp
#define repository_factory_hpp

#include <stdio.h>
#include "user_repo_base.h"
#include "account_repo_base.h"
#include "raw_account_repo_base.h"
#include "user_context.hpp"
#include "account_context.hpp"
#include "raw_account_context.hpp"
#include <string>

using namespace std;


struct repository_factory
{
    shared_ptr<user_repo_base> create_user_repo(string s, shared_ptr<user_context> & context);
    shared_ptr<account_repo_base> create_account_repo(string s, shared_ptr<account_context> & context);
    shared_ptr<raw_account_repo_base> create_raw_account_repo(string s, shared_ptr<raw_account_context> & context);
};
#endif /* repository_factory_hpp */
