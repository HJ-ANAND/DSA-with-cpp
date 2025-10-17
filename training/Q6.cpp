// //     6. Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members: Accountno, balance;
// The withdrawal function should return remaining balance to the user and should deduct withdrawal amount from balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)

// The Deposit function should return updated balance to user.

#include <iostream>
using namespace std;

class bank
{
    int acc_no;
    int balance;

public:
    bank(int accountno, int bal)
    {
        acc_no = accountno;
        balance = bal;
    }

    void checkBalance()
    {
        cout << "Your Balance is :- " << balance << endl;
    }
    void depositeMoney()
    {
        int no;

        cout << "Enter the amount to deposite :- ";
        cin >> no;
        balance += no;

        cout << "Amount Deposited!" << endl;
        cout << "New Balance = " << balance << endl;
    }
    void withdrawMoney()
    {
        int no;

        cout << "Entere the amount to withdraw : ";
        cin >> no;

        if (no > balance)
        {
            cout << "Insufficent Balance. ";
        }
        else
        {
            balance -= no;
            cout << "Amount Withdrawn : " << no << endl;
            cout << "New Balance : " << balance << endl;
        }
    }
};

int main()
{
    bank obj(12345, 10000);
    obj.checkBalance();
    obj.depositeMoney();
    obj.withdrawMoney();
    return 0;
}