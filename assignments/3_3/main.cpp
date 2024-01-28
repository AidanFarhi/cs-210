/**
 * Chada Tech Clocks
 * 
 * Purpose: Enable the user to display and manipulate a 12 and 24 hour clock.
 * Author:  Aidan Farhi
 * Date:    2024-01-28
*/
#include "display.h"
#include "time.h"

void init_time(Time& time) {
    int hour, minute, second;
    cout << "Set the initial time (24-Hour format)" << endl;
    cout << "Enter initial hour: ";
    cin >> hour;
    cout << "Enter initial minute: ";
    cin >> minute;
    cout << "Enter initial second: ";
    cin >> second;
    set_time(time, hour, minute, second);
}

int main() {

    // Declare and initialize variables to be used in program.
    int user_choice = 0;
    bool is_valid_initial_time = false;
    Time time = {-1, -1, -1};

    // Keep looping until the user enters valid values for the inital clock setting.
    while (!is_valid_initial_time) {
        init_time(time);
        is_valid_initial_time = is_valid_time(time);
    }

    // Keep looping until user enters exit command.
    while (user_choice != 4) {
        display_menu();
        cin >> user_choice;
        if (user_choice == 1) {
            cout << "Adding one hour" << endl;
            display_time(time);
        } else if (user_choice == 2) {
            cout << "Adding one minute" << endl;
            display_time(time);
        } else if (user_choice == 3) {
            cout << "Adding one second" << endl;
            display_time(time);
        } else if (user_choice == 4) {
            break;
        } else {
            continue;
        }
    }

    // Exit program.
    return 0;
}