#include <iostream>
using namespace std;

void display_menu()
{
    cout << "------------ Menu Options ----------" << endl;
    cout << "(1) search for an item frequency" << endl;
    cout << "(2) display item frequencies | list" << endl;
    cout << "(3) display item frequencies | histogram" << endl;
    cout << "(4) exit" << endl;
    cout << "------------------------------------" << endl;
    cout << ">";
}

void lookup_item_frequency(unordered_map<string, int> item_frequencies, string item)
{
    cout << "-----------    Result     ----------" << endl;
    if (item_frequencies.find(item) != item_frequencies.end())
    {
        cout << item << " " << item_frequencies.at(item) << endl;
    }
    else
    {
        cout << item << " not found." << endl;
    }
    cout << "------------------------------------" << endl;
}

void display_item_frequencies(unordered_map<string, int> item_frequencies)
{
    cout << "--------- Item Frequencies ---------" << endl;
    for (auto pair : item_frequencies)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    cout << "------------------------------------" << endl;
}

void display_item_frequencies_histogram(unordered_map<string, int> item_frequencies)
{
    cout << "---- Item Frequencies Histogram ----" << endl;
    cout << "display_item_frequencies_histogram" << endl;
    cout << "------------------------------------" << endl;
}
