//
//  raw_account_context.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef raw_account_context_hpp
#define raw_account_context_hpp

#include <stdio.h>
#include <vector>
#include "raw_account_model.hpp"

class raw_account_context
{
    vector<shared_ptr<raw_account_model>> lst;
    void generate_random_data();
public:
    raw_account_context();
    void load();

    vector<shared_ptr<raw_account_model>> get_data();
    
};
#endif /* raw_account_context_hpp */
