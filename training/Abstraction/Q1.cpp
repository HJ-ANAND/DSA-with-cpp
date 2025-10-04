#include <iostream>
using namespace std;

class DISTANCE
{
    int feet, inches;

public:
    void input()
    {
        cout << "Enter feet : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inches;
    }
    void output()
    {
        cout << feet << " Feet " << inches << " inches " << endl;
    }
    DISTANCE add(DISTANCE d)
    {
        DISTANCE temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12)
        {
            temp.feet = temp.feet + (temp.inches / 12);
            temp.inches = temp.inches % 12;
        }

        return temp;
    }
    //     void add(DISTANCE temp)  ######## WRONG
    //     {
    //         int newFeet;
    //         int newInch;
    //         if (inches + temp.inches > 12)
    //         {
    //             int add = inches + temp.inches / 12;
    //             int rem = inches + temp.inches % 12;
    //             int newFeet = feet + temp.feet + add;
    //             int newInch = inches + temp.inches+ rem;
    //         }
    //         else
    //         {
    //             int newFeet = feet + temp.feet;
    //             int newInch = inches + temp.inches;
    //         }
    //         cout << "New Lenght = " << newFeet << " feet " << newInch << " inch " << endl;
    //         ;
    //     }
};

int main()
{
    DISTANCE d1, d2;
    cout << "Enter First Distance : " << endl;
    d1.input();
    cout << "Enter Second Distance : " << endl;
    d2.input();

    DISTANCE d3 = d1.add(d2);
    d3.output();
    return 0;
}