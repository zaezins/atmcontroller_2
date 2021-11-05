//
//  cash.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#include "cash_model.hpp"
#include <iostream>

using namespace std;


cash_model::cash_model(int arg)
:current(arg)
{
    
}

void cash_model::deposit(int val)
{
    this->current += val;
}

void cash_model::withdraw(int val)
{
    if(this->is_enough(val) == true)
    {
        this->current -= val;
    }
    else
    {
        cout << "your balance is not enough to withdraw " << val << endl;
    }
}
