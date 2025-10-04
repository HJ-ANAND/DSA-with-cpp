#include <iostream>
using namespace std;

class EMPLOYEE
{
    int EMPCODE;
    string EMPNAME;

public:
    void getdata()
    {
        cout << "Enter employee code: ";
        cin >> EMPCODE;
        cout << "Enter employee name: ";
        cin >> EMPNAME;
    }
    void display()
    {
        cout << "Employee name - " << EMPNAME << endl;
        cout << "Employee code - " << EMPCODE << endl;
    }
};

int main()
{
    EMPLOYEE obj[6];
    for (int i = 0; i < 6; i++)
    {
        obj[i].getdata();
    }
    for (int i = 0; i < 6; i++)
    {
        obj[i].display();
    }

    return 0;
}