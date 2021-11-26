if (EPOLL_EXISTS)
    set(yogitee_lib
            log.c
            read.c
            tcp_server.c
            channel.c
            event_loop.c
            poll_dispatcher.c
            epoll_dispatcher.c
            )
else ()
    set(yogitee_lib
            log.c
            read.c
            tcp_server.c
            channel.c
            event_loop.c
            poll_dispatcher.c
    )
endif ()

add_library(yogitee ${yogitee_lib})
target_link_libraries(yogitee pthread)

install(TARGETS yogitee DESTINATION lib)

#file(GLOB HEADERS "*.h")
#install(FILES ${HEADERS} DESTINATION include/)