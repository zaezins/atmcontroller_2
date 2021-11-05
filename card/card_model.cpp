//
//  card.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#include "card_model.hpp"

card_model::card_model(shared_ptr<cash_model> & arg)
:cash(arg)
{
    
}


int card_model::get_balance()
{
    if(this->cash != nullptr)
    {
        return this->cash->get_current();
    }
    // TODO.
    return -1;
}

bool card_model::deposit(int val)
{
    if(this->cash != nullptr)
    {
        this->cash->deposit(val);
        return true;
    }
    return false;
}

bool card_model::withdraw(int val)
{
    if(this->cash->is_enough(val) == true)
    {
        this->cash->withdraw(val);
        return true;
    }
    return false;
}
