#include <iostream>
#include <fstream>
using namespace std;

#include "db.h"

DB::DB(string item_list_file_path)
{
    unordered_map<string, int> frequencies;
    ifstream file(item_list_file_path);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            frequencies[line]++;
        }
        file.close();
    }
    item_frequencies = frequencies;
}

unordered_map<string, int> DB::get_all_frequencies()
{
    return item_frequencies;
}

void DB::generate_frequency_file(string frequency_file_path)
{
    ofstream file(frequency_file_path);
    if (file.is_open())
    {
        for (auto pair : item_frequencies)
        {
            string line = pair.first + " " + to_string(pair.second);
            file << line << endl;
        }
        file.close();
    }
}
