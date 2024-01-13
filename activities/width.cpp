#include <iostream>
#include <iomanip>
using namespace std;

/* Constants */
const int LEFT_WIDTH  = 10;
const int RIGHT_WIDTH = 12;
const int LINE_WIDTH  = 23;

void print_data(string left_item, string right_item)
{
    cout << setw(LEFT_WIDTH) << left << left_item << "|";
    cout << setw(RIGHT_WIDTH) << right << right_item << endl;
}

void print_line()
{
    cout << setfill('-') << setw(LINE_WIDTH) << "" << endl;
    cout << setfill(' ');
}

int main()
{
    print_line();
    print_data("Dog age", "Human age");
    print_line();
    print_data("2 months", "14 months");
    print_data("2 months", "14 months");
    print_data("2 months", "14 months");
    print_data("2 months", "14 months");
    print_line();
} 