//
//  Icard.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef card_base_h
#define card_base_h


struct card_base
{
    virtual int get_balance() = 0;
    virtual bool deposit(int val) = 0;
    virtual bool withdraw(int val) = 0;    
};

#endif /* card_base_h */
