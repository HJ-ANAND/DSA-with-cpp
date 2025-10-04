#include <iostream>
using namespace std;

class A
{
public:
    int feet, inch;
    A(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void operator+()
    { //+ operator
        feet++;
        inch++;
        cout << feet << " " << inch << endl;
    }
};

int main()
{
    A obj(5, 6);
    +obj;
    // obj.operator-();
    return 0;
}