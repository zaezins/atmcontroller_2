//
//  user_repo_impl.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef user_repo_impl_hpp
#define user_repo_impl_hpp

#include <stdio.h>



#include <stdio.h>
#include "user_repo_base.h"
#include "user_context.hpp"


class user_repo_impl : public user_repo_base
{
    shared_ptr<user_context> context;
public:
    user_repo_impl(shared_ptr<user_context> & arg);
    virtual vector<shared_ptr<user_model>> find_all() override;
    virtual shared_ptr<user_model> find_one(string name) override;    
};


#endif /* user_repo_impl_hpp */
