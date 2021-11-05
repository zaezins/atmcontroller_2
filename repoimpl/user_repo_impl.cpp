//
//  user_repo_impl.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/03.
//

#include "user_repo_impl.hpp"



user_repo_impl::user_repo_impl(shared_ptr<user_context> & arg)
: context(arg)
{
    
}

vector<shared_ptr<user_model>> user_repo_impl::find_all()
{
    return this->context->get_data();
}

shared_ptr<user_model> user_repo_impl::find_one(string name)
{
    shared_ptr<user_model> ret = nullptr;
    for(auto iter : this->find_all())
    {
        if(iter->get_name() == name)
        {
            ret = iter;
            break;
        }
    }
    return ret;
}
