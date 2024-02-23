#include <iostream>
#include <unordered_map>
using namespace std;

#include "db.h"

int main()
{
    string input_file_name = "CS210_Project_Three_Input_File.txt";
    unordered_map<string, int> map = get_all_frequencies(input_file_name);
    for (auto x : map)
    {
        cout << x.first << " " << x.second << endl;
    }
}