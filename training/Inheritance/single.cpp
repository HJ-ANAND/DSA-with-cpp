#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class of A" << endl;
    }
};
class B
{
public:
    void put()
    {
        cout << "Class of B" << endl;
    }
};

class C : public A, public B
{
public:
    void get()
    {
        cout << "Class of C" << endl;
    }
};

int main()
{
    C obj;
    obj.show();
    obj.put();
    obj.get();
    return 0;
}