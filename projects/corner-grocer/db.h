#ifndef DB_H_
#define DB_H_

#include <iostream>
#include <unordered_map>
using namespace std;

class DB
{
public:
    DB(string item_list_file_path);
    unordered_map<string, int> get_all_frequencies();
    void generate_frequency_file(string frequency_file_path);

private:
    unordered_map<string, int> item_frequencies;
};

#endif
