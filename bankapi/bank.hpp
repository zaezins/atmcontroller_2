//
//  bank.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef bank_hpp
#define bank_hpp

#include <stdio.h>
#include "bank_base.h"
#include "account_context.hpp"
#include "user_context.hpp"
#include <memory>
#include <set>
#include "context_factory.hpp"
#include "repository_factory.hpp"

#include "cash_model.hpp"
using namespace std;


class bank : public bank_base
{
    shared_ptr<context_factory> cont_factory;
    shared_ptr<repository_factory> repo_factory;
    
    shared_ptr<user_repo_base> usr_repo;
    
    map<string, shared_ptr<cash_model>> card_map;
    void load();
    string join(string name, string bank, string account);
public:
    bank();
    virtual bool is_pin_valid(string pin) override;
    virtual bool deposit(string name, string bank, string account_num, int val) override;
    virtual bool withdraw(string name, string bank, string account_num, int val) override;
    virtual int get_balance(string name, string bank, string account_num) override;
    virtual bool find_account(string name, string bank, string account_num) override;
};

#endif /* bank_hpp */
