#include<iostream>
using namespace std;

class A
{
    public:
    string name;
    int age;
};

class B : public A{
    public:

    string name = "B";
    int age = 25;

};

class C : public A
{
    public:
    string name = "Emp";
    int age = 45;
};

class D : public B, public C{
    
};