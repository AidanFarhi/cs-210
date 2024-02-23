#include <iostream>
#include <unordered_map>
using namespace std;

#include "db.h"
#include "io.h"

int main()
{
    string user_input = "";
    string input_file_name = "CS210_Project_Three_Input_File.txt";
    unordered_map<string, int> item_frequencies = get_all_frequencies(input_file_name);

    while (user_input != "3")
    {
        display_menu();
        cin >> user_input;
    }
}