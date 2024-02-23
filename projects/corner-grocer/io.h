#ifndef IO_H_
#define IO_H_

#include <iostream>
#include <unordered_map>
using namespace std;

void display_menu();
void lookup_item_frequency(unordered_map<string, int> item_frequencies);
void display_item_frequencies(unordered_map<string, int> item_frequencies);
void display_item_frequencies_histogram(unordered_map<string, int> item_frequencies);

#endif