// WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14  (Using Class and Object)

#include <iostream>
using namespace std;

class AreaOfCircle
{
    int rad;

public:
    int area(int r)
    {
        float PI = 3.14;

        float area = PI * r * r;
        return area;
    }
};

int main()
{
    AreaOfCircle obj;
    int r;
    cout << "Enter Radious of Circle : ";
    cin >> r;
    cout << "Area of Circle = " << obj.area(r);
    return 0;
}