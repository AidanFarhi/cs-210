#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include <iomanip>
#include "time.h"
using namespace std;

/**
 * Displays the menu to standard output.
*/
void display_menu() {
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
}

/**
 * Displays the time in 12-Hour and 24-Hour format.
 * 
 * @param time `Time` struct holding the current time values to display.
*/
void display_time(Time& time) {
    cout << "**************************";
    cout << "   ";
    cout << "**************************";
    cout << endl;
    cout << "*     12-Hour Clock      *";
    cout << "   ";
    cout << "*     24-Hour Clock      *";
    cout << endl;
    cout << "*      ";
    cout << setw(2) << setfill('0') << time.hour << ":";
    cout << setw(2) << setfill('0') << time.minute << ":"; 
    cout << setw(2) << setfill('0') << time.second;
    cout << " PM";
    cout << "       *";
    cout << "   ";
    cout << "*        ";
    cout << setw(2) << setfill('0') << time.hour << ":";
    cout << setw(2) << setfill('0') << time.minute << ":"; 
    cout << setw(2) << setfill('0') << time.second;
    cout << "        *";
    cout << endl;
    cout << "**************************";
    cout << "   ";
    cout << "**************************";
    cout << endl;
}

#endif