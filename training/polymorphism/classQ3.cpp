#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    virtual void information()
    {
    }
};

class Employee : virtual public Person
{
public:
    void information()
    {
        cout << "Enter Employee Name : ";
        cin >> name;
        cout << "Enter Employee Age : ";
        cin >> age;

        cout << "Employee Name is : " << name << endl;
        cout << "Employee Age is : " << age << endl;
    }
};

class Student : virtual public Person
{
public:
    void information()
    {
        cout << "Enter Student Name : ";
        cin >> name;
        cout << "Enter Student Age : ";
        cin >> age;

        cout << "Student Name is : " << name << endl;
        cout << "Student Age is : " << age << endl;
    }
};

class Manager : public Employee, public Student
{
public:
    void information()
    {
        cout << "Enter Manager Name : ";
        cin >> name;
        cout << "Enter Manager Age : ";
        cin >> age;

        cout << "Manager Name is : " << name << endl;
        cout << "Manager Age is : " << age << endl;
    }
};

int main()
{
    Person *obj;
    Employee obj1;
    Student obj2;
    Manager obj3;

    obj = &obj1;
    obj->information();
    obj = &obj2;
    obj->information();
    obj = &obj3;
    obj->information();
    return 0;
}