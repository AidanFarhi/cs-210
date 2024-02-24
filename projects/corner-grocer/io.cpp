#include <iostream>
#include <iomanip>
using namespace std;

#include "io.h"

void IO::display_menu()
{
    cout << "------------ Menu Options ----------" << endl;
    cout << "(1) search for an item frequency" << endl;
    cout << "(2) display item frequencies | list" << endl;
    cout << "(3) display item frequencies | histogram" << endl;
    cout << "(4) exit" << endl;
    cout << "------------------------------------" << endl;
    cout << ">";
}

void IO::lookup_item_frequency(unordered_map<string, int> item_frequencies, string item)
{
    cout << "-------------- Result --------------" << endl;
    if (item_frequencies.find(item) != item_frequencies.end())
    {
        cout << item << " " << item_frequencies.at(item) << endl;
    }
    else
    {
        cout << item << " not found." << endl;
    }
}

void IO::display_item_frequencies(unordered_map<string, int> item_frequencies)
{
    cout << "--------- Item Frequencies ---------" << endl;
    for (auto pair : item_frequencies)
    {
        cout <<  setw(14) << left << pair.first << pair.second << endl;
    }
}

void IO::display_item_frequencies_histogram(unordered_map<string, int> item_frequencies)
{
    cout << "---- Item Frequencies Histogram ----" << endl;
    for (auto pair : item_frequencies)
    {
        cout << setw(14) << left << pair.first;
        for (int i = 0; i < pair.second; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
