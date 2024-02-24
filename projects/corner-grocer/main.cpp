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

    // Load the frequencies into a map and save the frequencies to a file.
    unordered_map<string, int> item_frequencies = get_all_frequencies(input_file_name);
    generate_frequency_file(item_frequencies, frequency_file_name);

    // Main program loop.
    while (user_input != "4")
    {
        display_menu();
        cin >> user_input;
        if (user_input == "1")
        {
            cout << "enter item: ";
            cin >> user_input;
            lookup_item_frequency(item_frequencies, user_input);
            user_input = "";
        }
        else if (user_input == "2")
        {
            display_item_frequencies(item_frequencies);
        }
        else if (user_input == "3")
        {
            display_item_frequencies_histogram(item_frequencies);
        }
        else
        {
            continue;
        }
    }

    // Exit program.
    return 0;
}
