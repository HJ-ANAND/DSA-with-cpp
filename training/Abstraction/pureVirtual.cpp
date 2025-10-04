#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void calculateArea() = 0;
    virtual void displayShape() = 0;
};

class Circle : public Shape
{
    double area;

public:
    void calculateArea()
    {
        int r;
        cout << "Enter Radius : ";
        cin >> r;
        area = 3.14 * r * r;
    }
    void displayShape()
    {
        cout << "SHAPE IS CIRCLE." << endl;
        cout << "Area is : " << endl;
    }
};
class Square : public Shape
{
    int area;

public:
    void calculateArea()
    {
        int s;
        cout << "Enter Side : ";
        cin >> s;
        area = s * s;
    }
    void displayShape()
    {
        cout << "SHAPE IS SQUARE." << endl;
        cout << "Area is : " << area << endl;
    }
};
class Triangle : public Shape
{
    double area;

public:
    void calculateArea()
    {
        int h, b;
        cout << "Enter height of triangle : ";
        cin >> h;
        cout << "Enter base of triangle : ";
        cin >> b;

        area = 0.5 * h * b;
    }
    void displayShape()
    {
        cout << "SHAPE IS TRIANGLE" << endl;
        cout << "Area is :" << area << endl;
    }
};

int main()
{

    Shape *obj = new Circle();
    Shape *obj1 = new Square();
    Shape *obj2 = new Triangle();

    obj->calculateArea();
    obj->displayShape();
    obj1->calculateArea();
    obj1->displayShape();
    obj2->calculateArea();
    obj2->displayShape();

    return 0;
}