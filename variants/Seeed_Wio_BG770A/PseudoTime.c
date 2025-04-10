/*
 * PseudoTime.c
 * Copyright (C) Seeed K.K.
 * MIT License
 */

#include <Arduino.h>
#include <time.h>

static time_t TimeWhenSet = 0;
static uint32_t MillisWhenSet;

int _gettimeofday(struct timeval *tv, void *tz)
{
    if (tv)
    {
        taskENTER_CRITICAL();
        const time_t timeWhenSet = TimeWhenSet;
        const uint32_t millisWhenSet = MillisWhenSet;
        taskEXIT_CRITICAL();

        if (timeWhenSet == 0)
        {
            tv->tv_sec = 0;
            tv->tv_usec = 0;
        }
        else
        {
            const uint32_t elapsed = millis() - millisWhenSet;
            tv->tv_sec = TimeWhenSet + elapsed / 1000;
            tv->tv_usec = elapsed % 1000 * 1000;
        }
    }

    return 0;
}

void setTime(const time_t *t)
{
    if (t)
    {
        const uint32_t now = millis();

        taskENTER_CRITICAL();
        TimeWhenSet = *t;
        MillisWhenSet = now;
        taskEXIT_CRITICAL();
    }
}
