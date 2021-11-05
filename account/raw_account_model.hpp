//
//  raw_account_model.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef raw_account_model_hpp
#define raw_account_model_hpp

#include <stdio.h>
#include <string>

using namespace std;


class raw_account_model
{
    string user_name;
    string bank_name;
    string account_number;
public:
    raw_account_model(string , string, string);
    
    inline void set_user_name(string arg)
    {
        this->user_name = arg;
    }
    
    inline void set_bank_name(string arg)
    {
        this->bank_name = arg;
    }
    
    inline void set_account_number(string arg)
    {
        this->account_number = arg;
    }
    
    inline const string & get_user_name()
    {
        return this->user_name;
    }
    
    inline const string & get_bank_name()
    {
        return this->bank_name;
    }
    
    inline const string & get_account_number()
    {
        return this->account_number;
    }
};
#endif /* raw_account_model_hpp */
