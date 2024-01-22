/*
 * Calculator.cpp
 *
 *  Date:   2023-01-21
 *  Author: Aidan Farhi
 */

#include <iostream>
using namespace std;

/*
    The following fixes were made to the below function signature:
    1. I changed the return type from void to int.
*/
int main()
{
    /*
        The following fixes were made below:
        1. I removed the unsused char statement[100]; variable declaration.
        2. I changed the op1 and op2 type from int to double.
    */
	double op1, op2;
	char operation;
    /*
        The following fixes were made to the the below variable:
        1. I added the missing semicolon at the end of the variable assignment.
        2. I changed the double quotes to single quotes.
    */
	char answer = 'Y';
    /*
        The following fixes were made to the below while-loop condition:
        1. I added another check to the while loop to account for
           the requirement of the user being able to enter either
           'y' or 'Y' to continue the program.
    */
	while ((answer == 'y') || (answer == 'Y'))
	{
		cout << "Enter expression" << endl;
        /*
            The following fixes were made to the below input statement:
            1. I swiched op2 and op1.
        */
		cin >> op1 >> operation >> op2;
        /*
            The following fixes were made to the the below if statement:
            1. I changed the double-quotes to single-quotes because the operation
               variable is a char not a string.
            2. Removed semicolon from after the if statement.
        */
		if (operation == '+')
            /*
                The following fixes were made to the the below output statement:
                1. I changed extraction operator to an insertion operator after
                   the op2 variable.
            */
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        /*
            The following fixes were made to the the below if statement:
            1. Removed semicolon from after the if statement.
        */
		if (operation == '-')
            /*
                The following fixes were made to the the below output statement:
                1. I changed extraction operator to an insertion operator after cout.
            */
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		if (operation == '*')
            /*
                The following fixes were made to the the below output statement:
                1. I changed the operator symbol from division to multiplication.
                2. I added the missing semicolon.
            */
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
		if (operation == '/')
            /*
                The following fixes were made to the the below output statement:
                1. I changed the operator symbol from multiplication to division.
            */
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}

    /*
        The following fixes were made below:
        1. I added the missing program exit message.
        2. I added a return statement.
    */
    cout << "Program Finished." << endl;
    return 0;
}