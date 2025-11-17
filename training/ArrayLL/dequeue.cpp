#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Dequeue
{
public:
    Node *front;
    Node *rear;

    Dequeue()
    {
        front = NULL;
        rear = NULL;
    }

    void insertFirst(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;

        if (front == NULL)
            front = rear = newNode;
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }

        cout << "Node Inserted at first." << endl;
    }

    void insertLast(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;

        if (rear == NULL)
            front = rear = newNode;
        else
        {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Node Inserted at the rear." << endl;
    }

    void deleteFirst()
    {
        if (front == NULL)
        {
            cout << "dequeue is empty." << endl;
            return;
        }
        else if (front == rear)
        {
            delete front;
            front = rear = NULL;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
        cout << "Node Deleted From front" << endl;
    }

    void deleteLast()
    {
        if (rear == NULL)
        {
            cout << "dequeue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            delete rear;
            front = rear = NULL;
        }
        else
        {
            Node *temp = rear;
            rear = rear->prev;
            rear->next = NULL;
            delete temp;
        }
        cout << "Node Deleted from Rear." << endl;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = front;
        while (temp)
        {
            cout << temp->data << "↹";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    Dequeue obj;
    int choice, value;

    do
    {
        cout << "1. Insert At front" << endl;
        cout << "2. Insert At rear" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Display Elements" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value :";
            cin >> value;
            obj.insertFirst(value);
            break;
        case 2:
            cout << "Enter Value :";
            cin >> value;
            obj.insertLast(value);
            break;
        case 3:
            obj.deleteFirst();
            break;
        case 4:
            obj.deleteLast();
            break;
        case 5:
            obj.display();
            break;

        default:
            break;
        }
    } while (choice != 6);

    return 0;
}