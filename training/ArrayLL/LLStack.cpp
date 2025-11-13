#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class stack
{
    Node *top;
    Node *temp;
    int count;

public:
    stack()
    {
        top = NULL;
        count = 0;
    }

    // Insertion value in stack
    void push(int value)
    {
        if (top == NULL)
        {
            top = new Node();
            top->data = value;
            top->next = NULL;
        }
        else
        {
            temp = new Node;
            temp->data = value;
            temp->next = top;
            top = temp;
        }
        count++;
        cout << "Node Inserted in stack." << endl;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *delNode = top;
        top = top->next;
        delete delNode;
        count--;

        cout << "Element is Deleted" << endl;
    }

    // Top element
    void Top()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top element is : " << top->data << endl;
    }

    // Display
    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Delete Stack
    void deleteStack()
    {
        while (top != NULL)
        {
            temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main()
{
    stack obj;
    int choice, value;

    do
    {
        cout << "1. Push " << endl;
        cout << "2. Pop " << endl;
        cout << "3. Top " << endl;
        cout << "4. Display " << endl;
        cout << "5. Delete Stack " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value : ";
            cin >> value;
            obj.push(value);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.Top();
            break;
        case 4:
            obj.display();
            break;
        case 5:
            obj.deleteStack();
            break;

        default:
            break;
        }
    } while (choice != 8);
}