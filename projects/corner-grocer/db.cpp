#include <iostream>
#include <fstream>
using namespace std;

#include "db.h"

unordered_map<string, int> get_all_frequencies(string word_list_file_path)
{
    unordered_map<string, int> word_frequencies;
    ifstream file(word_list_file_path);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            word_frequencies[line]++;
        }
    }
    return word_frequencies;
}

void generate_frequency_file(unordered_map<string, int> word_frequency_map, string frequency_file_path)
{
    cout << "yolo" << endl;
}

int get_frequency(string word)
{
    return 0;
}
