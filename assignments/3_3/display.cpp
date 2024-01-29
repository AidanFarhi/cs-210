#include <iostream>
#include <iomanip>
#include <string>
#include "time.h"
using namespace std;

void display_menu() {
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
}

void display_time(Time& time) {
    // Figure out whether to display AM or PM.
    string am_or_pm = (time.hour >= 12) ? " PM" : " AM";
    // If the hour value is > 12, subtract 12 to display the correct 12-Hour Clock value.
    int clock_12_hour = (time.hour > 12) ? time.hour - 12 : time.hour;
    // If the hour value is 0, display 12 in the 12-Hour Clock value.
    clock_12_hour = (time.hour == 0) ? 12 : clock_12_hour;
    cout << "**************************";
    cout << "   ";
    cout << "**************************";
    cout << endl;
    cout << "*     12-Hour Clock      *   ";
    cout << "*     24-Hour Clock      *";
    cout << endl;
    cout << "*      ";
    cout << setw(2) << setfill('0') << clock_12_hour << ":";
    cout << setw(2) << setfill('0') << time.minute << ":"; 
    cout << setw(2) << setfill('0') << time.second;
    cout << am_or_pm;
    cout << "       *   *        ";
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
