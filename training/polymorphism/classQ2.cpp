#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void Area()
    {
    }

    virtual void Parameter()
    {
    }
};

class Circle : public Shape
{
public:
    void Area()
    {
        int r;
        cout << "Enter Radius : ";
        cin >> r;
        cout << "Area of Circle is : " << 3.14 * r * r << endl;
    }
    void Parameter()
    {
        int r;
        cout << "Enter Radius : ";
        cin >> r;
        cout << "Parameter of Circle is : " << 3.14 * 2 * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void Area()
    {
        int len, wid;
        cout << "Enter Length : ";
        cin >> len;
        cout << "Enter Width : ";
        cin >> wid;
        cout << "Area of Rectangle is : " << len * wid << endl;
    }
    void Parameter()
    {
        int len, wid;
        cout << "Enter Length : ";
        cin >> len;
        cout << "Enter Width : ";
        cin >> wid;
        cout << "Parameter of Rectangle is : " << 2 * (len + wid) << endl;
    }
};

int main()
{
    Shape *obj;
    Circle ob;
    Rectangle o;

    obj = &ob;
    obj->Area();
    obj->Parameter();

    obj = &o;
    obj->Area();
    obj->Parameter();

    return 0;
}