//
// Created by mayue on 2021/11/26.
//

#ifndef YOGITEE_EVENT_LOOP_H
#define YOGITEE_EVENT_LOOP_H

#include <pthread.h>
#include "channel.h"
#include "event_dispatcher.h"
#include "common.h"

extern const struct event_dispatcher epoll_dispatcher;

struct channel_element {
    int type; // 1: add 2: delete
    struct channel *channel;
    struct channel_element *next;
};

struct event_loop {
    int quit;
    const struct event_dispatcher *eventDispatcher;

    /** 对应的event_dispatcher的数据 */
    void *event_dispatcher_data;
    struct channel_map *channelMap;

    int is_handle_pending;
    struct channel_element *pending_head;
    struct channel_element *pending_tail;

    pthread_t owner_thread_id;
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int socketPair[2];
    char *thread_name;

};

#endif