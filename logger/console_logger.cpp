//
//  consolelogger.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#include "console_logger.hpp"

#include <stdlib.h>
#include <iostream>


void console_logger::log(int level, string file, string func, string content)
{
    if(level == logger_base::ERROR)
    {
        cout << "err." << "file:" << file << ",func:"<< func << "," << content << endl;
    }
    else if (level == logger_base::WARN)
    {
        cout << "war." <<  "file:" << file << ",func:"<< func << "," << content << endl;
    }
    else if (level == logger_base::DEBG)
    {
        cout << "dbg:"  <<  "file:" << file << ",func:"<< func << "," << content << endl;
    }
    else if (level == logger_base::TRACE)
    {
        cout << "trc:"  <<  "file:" << file << ",func:"<< func << "," << content << endl;
    }
}
void console_logger::error(string file, string func, string content)
{
    this->log(logger_base::ERROR, file, func, content);
}

void console_logger::warn(string file, string func, string content)
{
    this->log(logger_base::WARN, file, func, content);
}

void console_logger::debug(string file, string func, string content)
{
    this->log(logger_base::DEBG, file, func, content);
}

void console_logger::trace(string file, string func, string content)
{
    this->log(logger_base::TRACE, file, func, content);
}

