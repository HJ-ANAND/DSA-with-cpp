#include <iostream>
using namespace std;

class Account
{
public:
    virtual void withdraw() = 0;
    virtual void deposite() = 0;
};

class SavingAccount : public Account
{
    int Savingbalance;

public:
    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw in Saving account: ";
        cin >> amount;
        if (Savingbalance < amount)
        {
            cout << "Insufficient Balance !" << endl;
        }
        else
        {
            Savingbalance -= amount;
            cout << "Withdraw Successful!!" << endl;
            cout << "New Amount in your Saving Account is : " << Savingbalance << endl;
        }
    }
    void deposite()
    {
        int amount;
        cout << "Enter amount to deposite in Saving account: ";
        cin >> amount;
        Savingbalance += amount;
        cout << "Deposite Successful!!" << endl;
        cout << "New Amount in your Saving Account is : " << Savingbalance << endl;
    }
};

class CurrentAccount : public Account
{
    int currentBalance;

public:
    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw in current account : ";
        cin >> amount;
        if (currentBalance < amount)
        {
            cout << "Insufficient Balance !" << endl;
        }
        else
        {
            currentBalance -= amount;
            cout << "Withdraw Successful!!" << endl;
            cout << "New Amount in your Current Account is : " << currentBalance << endl;
        }
    }
    void deposite()
    {
        int amount;
        cout << "Enter amount to deposite in current account: ";
        cin >> amount;
        currentBalance += amount;
        cout << "Deposite Successful!!" << endl;
        cout << "New Amount in your Current Account is : " << currentBalance << endl;
    }
};

int main()
{
    Account *obj[2];
    obj[0] = new SavingAccount();
    obj[1] = new CurrentAccount();

    obj[0]->deposite();
    obj[0]->withdraw();
    obj[1]->deposite();
    obj[1]->withdraw();

    return 0;
}