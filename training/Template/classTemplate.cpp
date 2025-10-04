#include <iostream>
using namespace std;

template <class T, class U>
class A
{
public:
    T x;
    U y;
    A()
    {
        cout << "Def. Const. of A" << endl;
    }
    A(T i, U j)
    {
        x = i;
        y = j;
    }

    void show()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    A<int, int> obj;
    A<int, float> obj1;
    A<int, float> ob(5, 4.5f);
    ob.show();
    return 0;
}