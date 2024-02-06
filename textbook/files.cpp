#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream my_file("hello.txt");
    my_file << "hello world";
    my_file.close();
}