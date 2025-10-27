#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // Self referencial structure (who refer self)
};

class SingleLL
{
public:
    Node *head;

    SingleLL()
    {
        head = NULL;
    }

    // Insert at first
    void insertfirst(int item)
    {
        Node *newNode = new Node();
        newNode->data = item;
        newNode->next = head;
        head = newNode;
        cout << "Value insert at first : " << endl;
    }

    void insertLast(int item)
    {
        Node *newNode = new Node();
        newNode->data = item;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "New Node inserted at the end." << endl;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "-->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{
    SingleLL obj;
    int choice, value;
    do
    {
        cout << "1. Insert at First " << endl;
        cout << "2. Insert at Last " << endl;
        cout << "3. Display " << endl;
        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> value;
            obj.insertfirst(value);
            break;
        case 2:
            cout << "Enter Value : ";
            cin >> value;
            obj.insertLast(value);
            break;
        case 3:
            obj.display();
            break;

        default:
            break;
        }
    } while (choice != 3);
    return 0;
}