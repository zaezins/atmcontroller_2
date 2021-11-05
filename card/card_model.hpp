//
//  card_model.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef card_model_hpp
#define card_model_hpp

#include <stdio.h>
#include "card_base.h"
#include "cash_model.hpp"
#include <memory>

using namespace std;


class card_model : public card_base
{
    shared_ptr<cash_model> cash;
public:
    card_model(shared_ptr<cash_model> & arg);
    virtual int get_balance() override;
    virtual bool deposit(int val) override;
    virtual bool withdraw(int val) override;
};

#endif /* card_model_hpp */
