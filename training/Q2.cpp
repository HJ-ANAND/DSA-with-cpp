// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <iostream>
using namespace std;

class Area
{
    int len, bre;

public:
    void setDim(int l, int b)
    {

        len = l;
        bre = b;
    }

    int getArea()
    {

        int area = len * bre;

        return area;
    }
};

int main()
{
    Area obj;
    int l, b;
    cin >> l >> b;
    obj.setDim(l, b);
    cout << obj.getArea();
    return 0;
}