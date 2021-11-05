//
//  context_factory.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#ifndef context_factory_hpp
#define context_factory_hpp

#include <stdio.h>

#include "user_context.hpp"
#include "account_context.hpp"
#include "raw_account_context.hpp"

struct context_factory
{
    shared_ptr<user_context> get_user_context(string s);
    shared_ptr<account_context> get_account_context(string s);
    shared_ptr<raw_account_context> get_raw_account_context(string s);
};

#endif /* context_factory_hpp */
