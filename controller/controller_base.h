//
//  Icontroller.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef controller_base_h
#define controller_base_h

#include "bank_base.h"
#include <memory>

struct controller_base
{
    virtual bool is_pin_valid(shared_ptr<bank_base> & obj, string pin) = 0;
    virtual bool update_account_balance(shared_ptr<bank_base> & obj, string bank, string account_num) = 0;
    virtual int get_balance(shared_ptr<bank_base> & obj, string bank, string account_num) = 0;

    virtual ~controller_base(){ };
};

#endif /* controller_base_h */
