#include "time.h"

bool is_valid_time(const Time& time) {
    if ((time.hour < 0) || (time.hour > 23)) {
        return false;
    } else if ((time.minute < 0) || (time.minute > 59)) {
        return false;
    } else if ((time.second < 0) || (time.second > 59)) {
        return false;
    }
    return true;
}

void set_time(Time& time, int hour, int minute, int second) {
    time.hour = hour;
    time.minute = minute;
    time. second = second;
}

void add_hour(Time& time) {
    time.hour = time.hour == 23 ? 0 : time.hour + 1;
}

void add_minute(Time& time) {
    if (time.minute == 59) {
        add_hour(time);
        time.minute = 0;
    } else {
        time.minute++;
    }
}

void add_second(Time& time) {
    if (time.second == 59) {
        add_minute(time);
        time.second = 0;
    } else {
        time.second++;
    }
}
