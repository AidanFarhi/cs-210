#ifndef TIME_H
#define TIME_H

/**
 * A struct to represent a point in time.
*/
struct Time {
    int hour;
    int minute;
    int second;
};

/**
 * Validates whether a given `Time` struct represents a valid time.
 * 
 * @param time The `Time` struct to validate.
 * 
 * @returns True if the time is valid or false if it is not.
*/
bool is_valid_time(const Time& time);

/**
 * Sets a `Time` struct with a given hour, minute, and second.
 * 
 * @param time The `Time` struct which will be set with given values.
 * @param hour The hour to set.
 * @param minute The minute to set.
 * @param second The second to set.
*/
void set_time(Time& time, int hour, int minute, int second);

/**
 * Adds an hour to a `Time` struct.
 * 
 * @param time The `Time` struct to add an hour to.
*/
void add_hour(Time& time);

/**
 * Adds an hour to a `Time` struct.
 * 
 * @param time The `Time` struct to add an minute to.
*/
void add_minute(Time& time);

/**
 * Adds an second to a `Time` struct.
 * 
 * @param time The `Time` struct to add an second to.
*/
void add_second(Time& time);

#endif