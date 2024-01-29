#ifndef DISPLAY_H
#define DISPLAY_H
#include "time.h"

/**
 * Displays the menu to standard output.
*/
void display_menu();

/**
 * Displays the time in 12-Hour and 24-Hour format.
 * 
 * @param time `Time` struct holding the current time values to display.
*/
void display_time(Time& time);

#endif