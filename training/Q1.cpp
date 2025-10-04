// WAP to print your name, age and city and pin code on screen (using class).

#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Name - Harshjeet" << endl;
        cout << "Age - 22" << endl;
        cout << "City - Greater Noida" << endl;
        cout << "Pincode - 201306" << endl;
    }
};

int main()
{
    A obj;
    obj.show();
    return 0;
}