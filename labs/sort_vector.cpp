/*
4.11 LAB: Sort a vector
Define a function named SortVector that takes a vector of integers as a parameter. 
Function SortVector() modifies the vector parameter by sorting the elements in 
descending order (highest to lowest). Then write a main program that reads a list 
of integers from input, stores the integers in a vector, calls SortVector(), 
and outputs the sorted vector. 

The first input integer indicates how many numbers are in the list.

Ex: If the input is:

5 10 4 39 12 2
the output is:

39,12,10,4,2,
For coding simplicity, follow every output value by a comma, including the last one.

Your program must define and call the following function:
void SortVector(vector<int>& myVec)

Hint: Sorting a vector can be done in many ways. You are welcome to look up and use any 
existing algorithm. Some believe the simplest to code is 
bubble sort: https://en.wikipedia.org/wiki/Bubble_sort. 
But you are welcome to try others: https://en.wikipedia.org/wiki/Sorting_algorithm.
*/

#include <iostream>
#include <vector>
using namespace std;

/**
 * Prints all of the elements of a vector.
 * 
 * @param myVec Vector whose values are printed.
*/
void PrintVector(const vector<int>& myVec) {
    for (int n : myVec) {
        cout << n << ",";
    }
    cout << endl;
}

/**
 * Populates a vector with values from standard input.
 * 
 * @param myVec Vector which will be populated with values.
*/
void PopulateVector(vector<int>& myVec) {
    int numberOfElements;
    int currentElement;
    cin >> numberOfElements;
    for (int i = 0; i < numberOfElements; ++i) {
        cin >> currentElement;
        myVec.push_back(currentElement);
    }
}

/**
 * Sorts a vector in-place.
 *
 * The underlying implementation is bubble sort.
 * See: https://en.wikipedia.org/wiki/Bubble_sort.
 *
 * @param myVec Vector whose values are sorted in-place.
 */
void SortVector(vector<int>& myVec) {
    for (int i = 0; i < myVec.size(); ++i) {
        for (int j = 1; j < (myVec.size() - i); ++j) {
            int right = myVec.at(j);
            int left = myVec.at(j-1);
            // If the element on the right is higher than
            // the one on the left, swap the elements.
            if (right > left) {
                myVec.at(j-1) = right;
                myVec.at(j) = left;
            }
        }
    }
}

int main() {
    // Declare a vector of ints.
    vector<int> myVec;

    // Populate the vector with values from standard input.
    PopulateVector(myVec);
    
    // Sort the vector in-place.
    SortVector(myVec);

    // Print the vector.
    PrintVector(myVec);

    // Exit program.
    return 0;
}