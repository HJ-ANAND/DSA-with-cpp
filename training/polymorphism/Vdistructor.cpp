#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Const. of Class A" << endl;
    }

    virtual ~A()
    {
        cout << "Dest. of Class A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Const. of Class B" << endl;
    }
    ~B()
    {
        cout << "Dest of class B" << endl;
    }
};

int main()
{
    B *obj = new B(); // object of B with reference of B.
    A *ob;

    ob = obj;
    delete ob;
    return 0;
}