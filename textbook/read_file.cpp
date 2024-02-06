#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream data_file("data_file.txt");
    int currentNum, count, sum, average = 0;

    while (!data_file.eof())
    {
        data_file >> currentNum;
        sum += currentNum;
        count++;
    }

    cout << "avg: " << sum / count << endl;
    data_file.close();
}