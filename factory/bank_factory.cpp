//
//  back_factory.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#include "bank_factory.hpp"
#include "bank.hpp"


shared_ptr<bank_base> bank_factory::create(string s)
{
    if(s == "default")
    {
        return make_shared<bank>();
    }
    else
    {
        throw exception();
    }
}
