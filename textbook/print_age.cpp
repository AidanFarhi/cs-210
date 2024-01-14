#include <iostream>
using namespace std;

int main()
{
    /* 
    Variable Declaration

    - The compiler will allocate a memory location with
    enough space to store an integer. Allocation is the 
    process of determining a suitable memory location to
    store data.
    */
    int userAge;

    cout << "Enter your age: ";

    /*
    Variable Assignment

    - The processor will write the value into the
    address of userAge.
    */
    cin >> userAge;

    cout << userAge << " is a great age." << endl;
}