#include <iostream>
#include <unordered_map>
using namespace std;

#include "db.h"
#include "io.h"

int main()
{
    // Initialize variables.
    string user_input = "";
    string input_file_name = "CS210_Project_Three_Input_File.txt";
    string frequency_file_name = "frequency.dat";
    IO io;

    // Instantiate the DB storing the item frequencies.
    DB db = DB(input_file_name);

    // Generate the frequency.dat file.
    db.generate_frequency_file(frequency_file_name);

    // Main program loop.
    while (user_input != "4")
    {
        io.display_menu();
        cin >> user_input;
        if (user_input == "1")
        {
            cout << "enter item: ";
            cin >> user_input;
            io.lookup_item_frequency(db.get_all_frequencies(), user_input);
            user_input = "";
        }
        else if (user_input == "2")
        {
            io.display_item_frequencies(db.get_all_frequencies());
        }
        else if (user_input == "3")
        {
            io.display_item_frequencies_histogram(db.get_all_frequencies());
        }
        else if (user_input == "4")
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "invalid option." << endl;
            continue;
        }
    }

    // Exit program.
    return 0;
}
