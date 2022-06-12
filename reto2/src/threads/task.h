#ifndef __TASK_H__
#define __TASK_H__

#include <pthread.h>

void task_setup (void);

pthread_t task_new (const char* name, void *(*f)(void *),
                    int period_ms, int deadline_ms,
                    int prio, int stacksize);
struct timeval *task_get_period (pthread_t tid);
struct timeval *task_get_deadline (pthread_t tid);

void mutex_init (pthread_mutex_t* m, int prioceiling);

#endif