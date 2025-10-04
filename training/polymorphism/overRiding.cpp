#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Class of A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Class of B" << endl;
    }
};

int main()
{
    A *obj;
    B ob;
    obj = &ob;
    obj->show();
    obj->A::show();
    return 0;
}