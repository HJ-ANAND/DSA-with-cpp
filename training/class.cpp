#include <iostream>
using namespace std;

class Student
{
    string *name = new string;
    int *roll = new int;
    int *marks = new int;

public:
    void getStudent()
    {
        cout << "Enter Name : ";
        cin >> *name;
        cout << "Enter Roll No. : ";
        cin >> *roll;
        cout << "Marks : ";
        cin >> *marks;
    }

    void printDetail()
    {
        cout << "Student Name is - " << *name << endl;
        cout << "Roll No is - " << *roll << endl;
        cout << "Marks is - " << *marks << endl;
    }
};

int main()
{
    int n;
    cout << "Enter No. of students :- ";
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].getStudent();
    }
    for (int i = 0; i < n; i++)
    {
        arr[i].printDetail();
    }

    delete[] arr;
    return 0;
}