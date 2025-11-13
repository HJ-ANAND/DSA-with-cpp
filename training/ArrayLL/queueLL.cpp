#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class queue
{
public:
    Node *front;
    Node *rear;

    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void insert(int value)
    { // ENQUEUE
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Node inserted in Queue " << endl;
    }

    void Delete()
    { // DEQUEUE
        if (front == NULL)
        {
            cout << "Queue is empty. " << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;

        if (front == NULL)
        {
            rear = NULL;
        }

        cout << "Value delete in Queue." << endl;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Peek element is : " << front->data << endl;
    }
};

int main()
{
    queue obj;
    int choice, value;

    do
    {
        cout << "1. Insert an element" << endl;
        cout << "2. Delete an element" << endl;
        cout << "3. Display elements" << endl;
        cout << "4. Peek" << endl;
        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value : ";
            cin >> value;
            obj.insert(value);
            break;
        case 2:
            obj.Delete();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            obj.peek();
            break;
        default:
            break;
        }
    } while (choice != 6);
}