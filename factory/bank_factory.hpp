//
//  back_factory.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#ifndef back_factory_hpp
#define back_factory_hpp

#include <stdio.h>
#include "bank_base.h"
#include <memory>

using namespace std;
struct bank_factory
{
    shared_ptr<bank_base> create(string s);
};
#endif /* back_factory_hpp */
