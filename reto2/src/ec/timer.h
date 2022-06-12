#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>
#include <time.h>
#include <signal.h>

#ifndef _TIMER_H_
#define _TIMER_H_

//FSM Time Management functions
void timeval_sub(struct timeval *res, struct timeval *a, struct timeval *b);
void timeval_add(struct timeval *res, struct timeval *a, struct timeval *b);
int timeval_less(struct timeval *a, struct timeval *b);
void delay_until(struct timeval* next_activation);

#endif