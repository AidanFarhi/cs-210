#ifndef DB_H_
#define DB_H_

#include <iostream>
#include <unordered_map>
using namespace std;

/**
 * @brief Represents a simple database for managing item frequencies.
 */
class DB
{
public:
    /**
     * @brief Constructor to initialize the database with an item list file.
     * @param item_list_file_path The path to the file containing the list of items.
     */
    DB(string item_list_file_path);

    /**
     * @brief Retrieves the frequencies of all items from the database.
     * @return An unordered_map representing item frequencies.
     */
    unordered_map<string, int> get_all_frequencies();

    /**
     * @brief Generates a file containing item frequencies.
     * @param frequency_file_path The path to the file to be generated.
     */
    void generate_frequency_file(string frequency_file_path);

private:
    /**
     * @brief The internal storage of item frequencies.
     */
    unordered_map<string, int> item_frequencies;
};

#endif
