/**
 * Chada Tech Clocks
 * 
 * Purpose: Enable the user to display and manipulate a 12 and 24 hour clock.
 * Author:  Aidan Farhi
 * Date:    2024-01-28
*/
#include <iostream>
#include "display.h"
#include "time.h"
#include "init.h"
using namespace std;

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
        switch (user_choice) {
            case 1:
                add_hour(time);
                display_time(time);
                break;
            case 2:
                add_minute(time);
                display_time(time);
                break;
            case 3:
                add_second(time);
                display_time(time);
                break;
            default:
                break;
        }
    }

    // Exit program.
    return 0;
}
