#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class circularQueue
{
public:
    Node *front;
    Node *rear;

    circularQueue()
    {
        front = NULL;
        rear = NULL;
    }

    // Insert value in Queue

    void insert(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;

        if (front == NULL)
        {
            front = rear = newNode;
            rear->next = front;
        }
        else
        {
            rear->next = newNode;
            newNode->next = front;
            rear = newNode;
        }

        cout << "Value insert in Queue." << endl;
    }

    // Delete Queue

    void Delete()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            delete front;
            front = NULL;
            rear = NULL;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            delete temp;
            rear->next = front;
        }

        cout << "Value Delete in Queue" << endl;
    }

    // Display

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            Node *temp = front;
            while (temp->next != front)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }

            cout << temp->data << endl;
        }
    }

    // Peek value

    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Peek Value is : " << front->data << endl;
        }
    }
};

int main()
{
    circularQueue obj;
    int choice, value;

    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
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

    return 0;
}