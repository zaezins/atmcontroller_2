//
//  controller.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef controller_hpp
#define controller_hpp

#include "controller_base.h"
#include <stdio.h>


class controller : public controller_base
{
public:
    virtual bool is_pin_valid(shared_ptr<bank_base> &  obj, string pin) override;
    virtual bool update_account_balance(shared_ptr<bank_base> &  obj, string bank, string account_num) override;
    virtual int get_balance(shared_ptr<bank_base> &  obj, string bank, string account_num) override;
};
#endif /* controller_hpp */
