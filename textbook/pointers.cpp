#include <iostream>
using namespace std;

class Point
{
public:
    Point(int x, int y) 
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
};

int main()
{
    Point* p1 = new Point(2, 3);
    Point* p2 = new Point(5, 2);

    cout << p1->x * p2->x << endl;
}