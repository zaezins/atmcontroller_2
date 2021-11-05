//
//  user.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef user_model_hpp
#define user_model_hpp

#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include "account_model.hpp"
#include <memory>

using namespace std;


class user_model
{
    string name;
    vector<shared_ptr<account_model>> lst;
public:
    user_model(string name);

    inline const string & get_name()
    {
        return this->name;
    }
    inline void set_name(string && name)
    {
        this->name = name;
    }
    inline const vector<shared_ptr<account_model>> & get_lst()
    {
        return this->lst;
    }

    void add_account(shared_ptr<account_model> & acc);
    void add_account(shared_ptr<account_model> && acc);
};
#endif /* user_model_hpp */
