//     3. WAP to display addition, subtraction, multiplication and division of two integers on screen.
// Declare Class Calculation
// Declare data member num1 and num2 in Private section Write member function for initialize num1 and num2 Write member function for each operation.

#include <iostream>
using namespace std;

class Calculation
{
    int num1, num2;

public:
    void initialize(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    int addition()
    {
        int sum = num1 + num2;
        return sum;
    }
    int subtraction()
    {
        int sub = num1 - num2;
        return sub;
    }
    int multiplication()
    {
        int mul = num1 * num2;
        return mul;
    }
};

int main()
{
    Calculation obj;
    int a, b;
    cin >> a >> b;
    obj.initialize(a, b);
    cout << obj.addition() << endl;
    cout << obj.subtraction() << endl;
    cout << obj.multiplication() << endl;
    return 0;
}