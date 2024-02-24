#ifndef IO_H_
#define IO_H_

#include <iostream>
#include <unordered_map>
using namespace std;

/**
 * @brief Represents IO operations for displaying menus and item frequencies.
 */
class IO
{
public:
    /**
     * @brief Displays the menu options for the program.
     */
    void display_menu();

    /**
     * @brief Looks up and displays the frequency of a specified item.
     * @param item_frequencies The unordered_map containing item frequencies.
     * @param user_input The user-provided input for item lookup.
     */
    void lookup_item_frequency(unordered_map<string, int> item_frequencies, string user_input);

    /**
     * @brief Displays the list of item frequencies.
     * @param item_frequencies The unordered_map containing item frequencies.
     */
    void display_item_frequencies(unordered_map<string, int> item_frequencies);

    /**
     * @brief Displays the item frequencies as a histogram.
     * @param item_frequencies The unordered_map containing item frequencies.
     */
    void display_item_frequencies_histogram(unordered_map<string, int> item_frequencies);
};

#endif
