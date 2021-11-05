//
//  cash.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef cash_model_hpp
#define cash_model_hpp

#include <stdio.h>

class cash_model
{
    int current;
public:
    cash_model(int arg);

    inline int get_current()
    {
        return this->current;
    }

    inline bool is_enough(int val)
    {
        return this->current >= val;
    }
    
    void deposit(int val);
    void withdraw(int val);
};
#endif /* cash_model_hpp */
