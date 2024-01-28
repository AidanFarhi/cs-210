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
 * Populates a vector with values from standard input.
 * 
 * @param myVec Vector which will be populated with values;
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
void SortVector(vector<int>& myVec) 
{
    for (int i = 0; i < myVec.size(); ++i) {
        for (int j = 0; j < myVec.size(); ++j) {
            int left = myVec.at(i);
            int right = myVec.at(j);
            if (left > right) {
                myVec.at(i) = right;
                myVec.at(j) = left;
            }
        }
    }
}

int main() {
    vector<int> v1;
    PopulateVector(v1);
    for (int n : v1) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}