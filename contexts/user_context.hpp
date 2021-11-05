//
//  user_context.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#ifndef user_context_hpp
#define user_context_hpp

#include <stdio.h>
#include <vector>
#include "user_model.hpp"

using namespace std;


class user_context
{
    vector<shared_ptr<user_model>> lst;
    void generate_random_data();
public:
    user_context();
    void load();

    vector<shared_ptr<user_model>> get_data();

};

#endif /* user_context_hpp */
