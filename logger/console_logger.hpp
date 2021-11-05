//
//  consolelogger.hpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef console_logger_hpp
#define console_logger_hpp

#include <stdio.h>

#include "logger_base.h"

class console_logger: public logger_base
{
    virtual void log(int level, string file, string func, string content) override;
public:
    virtual void error(string file, string func, string content) override;
    virtual void warn(string file, string func, string content) override;
    virtual void debug(string file, string func, string content) override;
    virtual void trace(string file, string func, string content) override;
    
};

#endif /* console_logger_hpp */
