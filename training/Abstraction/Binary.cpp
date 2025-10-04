#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    A(int a, int b)
    {
        x = a;
        y = b;
    }

    A()
    {
    }

    A operator+(A temp)
    {
        A obj;
        obj.x = x + temp.x;
        obj.y = y + temp.y;
        return obj;
    }

    void show()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    A obj(2, 3);
    A obj1(4, 5);
    A obj2;

    obj2 = obj + obj1;
    obj2.show();
    return 0;
}