//
// Created by mayue on 2021/11/18.
//

#ifndef YOGITEE_COMMON_H
#define YOGITEE_COMMON_H

#include "config.h"

#include "log.h"

#include    <sys/types.h>    /* basic system data types */
#include    <sys/socket.h>    /* basic socket definitions */
#include    <time.h>        /* timespec{} for pselect() */
#include    <netinet/in.h>    /* sockaddr_in{} and other Internet defns */
#include    <arpa/inet.h>    /* inet(3) functions */
#include    <errno.h>

#include    <stdlib.h>
#include    <string.h>
#include    <stdio.h>
#include    <unistd.h>

#include    <sys/select.h>    /* for convenience */
#include    <poll.h>        /* for convenience */

void error(int status, int err, char *fmt, ...);

size_t readn(int fd, void *vptr, size_t n);

size_t read_message(int fd, char *buffer, size_t length);

int tcp_server_listen(int port);

#define    SERV_PORT      43211
#define    MAXLINE        4096
#define    LISTENQ        1024

#endif //YOGITEE_COMMON_H

