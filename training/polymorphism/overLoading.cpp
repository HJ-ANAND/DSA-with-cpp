#include <iostream>
using namespace std;

class shape
{
public:
    void area(int r)
    {
        int pi = 3.14;
        int area = pi * r * r;
        cout << "Area of Circle is : " << area << endl;
    }
    void area(double len, double bre)
    {
        double area = len * bre;

        cout << "Area of Rectangle is : " << area << endl;
    }
    void area(float a)
    {
        float area = a * a;
        cout << "Area of Square is : " << area << endl;
    }
};

int main()
{
    shape obj;
    obj.area(7);
    obj.area(5.0, 10.0);
    obj.area(20.5f);
    return 0;
}