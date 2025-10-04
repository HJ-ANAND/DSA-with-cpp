#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    A(int x, int y)
    {
        a = x;
        b = y;
    }

    int operator>(A temp)
    {
        cout << "temp a : " << a;
        cout << "temp b : " << b;
        if (a > temp.a && b > temp.b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void show()
    {
        cout << a << " " << b << " ";
    }
};

int main()
{
    A obj(4, 5);
    A obj1(2, 3);

    if (obj > obj1)
    {
        obj.show();
    }
    else
    {
        obj1.show();
    }
    return 0;
}