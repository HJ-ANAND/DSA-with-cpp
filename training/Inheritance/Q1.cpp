#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class student : public Person
{
    int stdid;

public:
    void get()
    {
        cout << "Enter Name of Student : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter student Id :";
        cin >> stdid;
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "stdid : " << stdid << endl;
    }
};

int main()
{
    student S;
    S.get();
    S.show();
    return 0;
}