//
//  account_context.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/04.
//

#ifndef account_context_hpp
#define account_context_hpp

#include <stdio.h>

#include <stdio.h>
#include <vector>
#include "account_model.hpp"

class account_context
{
    vector<shared_ptr<account_model>> lst;
    void generate_random_data();
public:
    account_context();
    void load();

    vector<shared_ptr<account_model>> get_data();
    
};
#endif /* account_context_hpp */
