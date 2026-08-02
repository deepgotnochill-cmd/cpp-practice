#include <iostream>
using namespace std;

class square
{
    int x;

public:
    int area(int);
};

int square::area(int a)
{
    x = a;
    return x * x;
}

int main()
{
    square s;
    cout << "Area = " << s.area(4);

    return 0;
}