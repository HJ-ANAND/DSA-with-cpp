#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A() = 0;
};

A::~A()
{
    cout << "Dest. of class A" << endl;
};

class B : public A
{
public:
    ~B()
    {
        cout << "Dest. of class B" << endl;
    }
};

int main()
{
    A *obj = new B();
    delete obj;
    return 0;
}