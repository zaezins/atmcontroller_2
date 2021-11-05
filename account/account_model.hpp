//
//  account.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef account_model_hpp
#define account_model_hpp

#include <stdio.h>
#include <string>

using namespace std;
class account_model
{
    string owner;
    string bank_name;
    string account_number;
    
public:
    account_model(string owner, string bank, string account_num);
    inline const string & get_owner()
    {
        return this->owner;
    }

    inline const string & get_bank_name()
    {
        return this->bank_name;
    }

    inline const string & get_account_number()
    {
        return this->account_number;
    }

    inline void set_owner(string & owner)
    {
        this->owner = owner;
    }
    
    inline void set_bank_name(string & name)
    {
        this->bank_name = name;
    }
    
    inline void set_account_number(string & num)
    {
        this->account_number = num;
    }
    
    inline void set_owner(string && owner)
    {
        this->owner = owner;
    }
    
    inline void set_bank_name(string && name)
    {
        this->bank_name = name;
    }
    
    inline void set_account_number(string && num)
    {
        this->account_number = num;
    }
};

#endif /* account_model_hpp */
