//     5. Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:

// Studid, name ,sem, branch.

#include <iostream>
using namespace std;

class Student
{
    int id, sem;
    string name, branch;

public:
    void getDetail()
    {
        cout << "Enter Name : ";
        cin.ignore(); // To clear any leftover newline character
        getline(cin, name);
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter sem : ";
        cin >> sem;
        cout << "Enter branch : ";
        cin.ignore(); // To clear newline after sem
        getline(cin, branch);
    }

    void printDetail()
    {
        cout << "Student ID - " << id << endl;
        cout << "sem - " << sem << endl;
        cout << "name - " << name << endl;
        cout << "branch - " << branch << endl;
    }
};

int main()
{
    Student obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].getDetail();
    }
    for (int i = 0; i < 3; i++)
    {
        obj[i].printDetail();
    }

    return 0;
}