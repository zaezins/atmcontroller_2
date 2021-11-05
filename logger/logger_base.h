//
//  Ilogger.h
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#ifndef logger_base_h
#define logger_base_h

#include <string>


using namespace std;
struct logger_base
{
    static const int ERROR = 5;
    static const int WARN = 4;
    static const int DEBG = 3;
    static const int TRACE = 2;

    virtual void log(int level, string file, string func, string content) = 0;
    virtual void error(string file, string func, string content) = 0;
    virtual void warn(string file, string func, string content) = 0;
    virtual void debug(string file, string func, string content) = 0;
    virtual void trace(string file, string func, string content) = 0;

    virtual ~logger_base(){};
};


#endif /* logger_base_h */
