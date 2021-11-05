//
//  Ibank.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef bank_base_hpp
#define bank_base_hpp
#include <string>


using namespace std;

struct bank_base
{
    virtual bool is_pin_valid(string pin) = 0;
    virtual bool deposit(string name, string bank, string account_num, int val) = 0;
    virtual bool withdraw(string name, string bank, string account_num, int val) = 0;
    virtual int get_balance(string name, string bank, string account_num) = 0;
    virtual bool find_account(string name, string bank, string account_num) = 0;
    virtual ~bank_base(){};
};


#endif /* bank_base_hpp */
