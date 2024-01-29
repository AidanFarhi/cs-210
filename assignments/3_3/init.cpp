#include <iostream>
#include "time.h"
using namespace std;

void init_time(Time& time) {
    int hour, minute, second;
    cout << "Set the initial time (24-Hour format)" << endl;
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minute: ";
    cin >> minute;
    cout << "Enter second: ";
    cin >> second;
    set_time(time, hour, minute, second);
}
