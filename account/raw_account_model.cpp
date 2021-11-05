//
//  raw_account_model.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#include "raw_account_model.hpp"




raw_account_model::raw_account_model(string arg_user_name,
                                     string arg_bank_name,
                                     string arg_account_number)
: user_name(arg_user_name),
  bank_name(arg_bank_name),
  account_number(arg_account_number)
{
    
}
