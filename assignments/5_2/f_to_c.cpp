#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Declare and initialize variables.
    ifstream input_file;
    ofstream output_file;
    string input_file_name = "FahrenheitTemperature.txt";
    string output_file_name = "CelsiusTemperature.txt";
    string city_name;
    int temp_fahr;
    int temp_cels;

    // Open input and output files.
    input_file.open(input_file_name);
    output_file.open(output_file_name);

    // Check if input file was succesfully opened.
    if (!input_file.is_open()) {
        cout << "Could not open " << input_file_name << endl;
        return 1;
    }

    // Check if output file was succesfully opened.
    if (!output_file.is_open()) {
        cout << "Could not open " << output_file_name << endl;
        return 1;
    }

    // Loop through input file, convert f to c, and write result to output file.
    while (!input_file.eof()) {
        input_file >> city_name;
        input_file >> temp_fahr;
        temp_cels = (temp_fahr - 32) * (5.0 / 9.0);
        output_file << city_name << " " << temp_cels << endl;
    }

    // Close files.
    input_file.close();
    output_file.close();
}