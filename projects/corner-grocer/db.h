#ifndef DB_H_
#define DB_H_

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> get_all_frequencies(string word_list_file_path);
void generate_frequency_file(unordered_map<string, int> item_frequencies, string frequency_file_path);

#endif