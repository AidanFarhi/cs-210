#ifndef DB_H_
#define DB_H_

#include <iostream>
#include <unordered_map>
using namespace std;

/**
 * @brief Reads a file containing a list of words and calculates the frequency of each word.
 * @param word_list_file_path The path to the file containing the list of words.
 * @return An unordered_map representing word frequencies.
 */
unordered_map<string, int> get_all_frequencies(string word_list_file_path);

/**
 * @brief Generates a file containing word frequencies.
 * @param item_frequencies The unordered_map containing word frequencies.
 * @param frequency_file_path The path to the file to be generated.
 */
void generate_frequency_file(unordered_map<string, int> item_frequencies, string frequency_file_path);

#endif
