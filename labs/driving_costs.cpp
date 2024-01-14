/*
2.25 LAB: Driving costs
Driving is expensive. Write a program with a car's gas milage 
(miles/gallon) and the cost of gas (dollars/gallon) as floating-point input, 
and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, 
which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements. 
Note: End with a newline.

Ex: If the input is:

20.0 3.1599
where the gas mileage is 20.0 miles/gallon and the cost of gas is $3.1599/gallon, 
the output is:

3.16 11.85 79.00
Note: Real per-mile cost would also include maintenance and depreciation.
*/

#include <iostream>
#include <iomanip> // For setprecision.
using namespace std;

// The three distances that will be used to calculate the cost of driving. 
const int DISTANCE_1 = 20;
const int DISTANCE_2 = 75;
const int DISTANCE_3 = 500;

int main()
{
    // Declare variables.
    double gas_milage;
    double cost_of_gas;

    // Get inputs.
    cin >> gas_milage;
    cin >> cost_of_gas;

    // Display results with 2 digits after the decimal point.
    cout << fixed << setprecision(2);
    cout << cost_of_gas * DISTANCE_1 / gas_milage << " ";
    cout << cost_of_gas * DISTANCE_2 / gas_milage << " ";
    cout << cost_of_gas * DISTANCE_3 / gas_milage << endl;

    // Exit program.
    return 0;
}