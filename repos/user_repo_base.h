//
//  user_repo_base.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef user_repo_base_h
#define user_repo_base_h
#include "user_model.hpp"
#include <vector>
#include <string>

using namespace std;


struct user_repo_base
{
    virtual vector<shared_ptr<user_model>> find_all() = 0;
    virtual shared_ptr<user_model> find_one(string name) = 0;
    
    virtual ~user_repo_base(){};
};


#endif /* user_repo_base_h */
