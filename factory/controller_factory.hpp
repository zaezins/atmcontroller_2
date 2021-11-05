//
//  controller_factory.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#ifndef controller_factory_hpp
#define controller_factory_hpp

#include <stdio.h>
#include "controller_base.h"
#include <memory>

using namespace std;

struct controller_factory
{
   shared_ptr<controller_base> create(string s);
};

#endif /* controller_factory_hpp */
