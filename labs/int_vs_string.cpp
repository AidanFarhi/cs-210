#include <string>
#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    // Initialize variables.
    string inputName;
    int age;

    // Set exception mask for cin stream.
    cin.exceptions(ios::failbit);

    // Read in the first name of input.
    cin >> inputName;

    // Loop through all inputs until -1 is encountered.
    while(inputName != "-1") 
    {
        // Catch any invalid ages.
        try
        {
            cin >> age;
        }
        catch(const exception& e)
        {
            // Set age to -1, clear error bit, and discard invalid input.
            age = -1;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Output name and age.
        cout << inputName << " " << (age + 1) << endl;

        // Get next name from input.
        cin >> inputName;
    }

    // Exit program.
    return 0;
}