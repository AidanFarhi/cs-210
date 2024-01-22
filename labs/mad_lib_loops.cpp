/*
Mad Libs are activities that have a person provide various words, 
which are then used to complete a short story in unexpected 
(and hopefully funny) ways.

Write a program that takes a string and an integer as input, 
and outputs a sentence using the input values as shown in the 
example below. The program repeats until the input string is 
quit and disregards the integer input that follows.

Ex: If the input is:

apples 5
shoes 2
quit 0
the output is:

Eating 5 apples a day keeps you happy and healthy.
Eating 2 shoes a day keeps you happy and healthy.
*/

#include <iostream>
#include <string>
using namespace std;

/*
Purpose: This program prints out a mad lib based on user input.
Author:  Aidan Farhi
Date:    2023-01-21
*/
int main() 
{

    // Declare variables.
    int inputNumber;
    string inputString;

    // Keep looping until user enters "quit".
    while (true) 
    {
        // Get inputs.
        cin >> inputString;
        cin >> inputNumber;

        // Check if user entered "quit".
        if (inputString == "quit") {
            break;
        }

        // Print mad lib output.
        cout << "Eating " << inputNumber << " " << inputString << " a day keeps you happy and healthy.";
        cout << endl;
    }

    // Exit program.
    return 0;
}
