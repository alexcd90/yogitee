//
// Created by mayue on 2021/11/26.
//

#ifndef YOGITEE_LOG_H
#define YOGITEE_LOG_H

#include "stdarg.h"

#define LOG_DEBUG_TYPE 0
#define LOG_MSG_TYPE 1
#define LOG_WARN_TYPE 2
#define LOG_ERR_TYPE 3

void yolanda_log(int severity, const char *msg);
void yolanda_logx(int severity, const char *errstr, const char *fmt, va_list ap);
void yolanda_msgx(const char *fmt, ...);
void yolanda_debugx(const char *fmt, ...);

#endif