//
//  controller_factory.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#include "controller_factory.hpp"

#include "controller.hpp"
#

shared_ptr<controller_base> controller_factory::create(string s)
{
    if(s == "default")
    {
        return make_shared<controller>();
    }
    else
    {
        throw exception();
    }
}
