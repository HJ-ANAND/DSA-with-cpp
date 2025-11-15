#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    int pri;
    Node *next;
};

class pQueue
{
public:
    Node *start;

    pQueue()
    {
        start = NULL;
    }

    // Insert Value in queue;
    void insert(int value, int p)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->pri = p;

        if (start == NULL || p < start->pri)
        {
            newNode->next = start;
            start = newNode;
        }
        else
        {
            Node *temp = start;
            while (temp->next != NULL && temp->next->pri <= p)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Display

    void display()
    {
        if (start == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp = start;
        while (temp)
        {
            cout << "[" << temp->data << "-" << temp->pri << "]" << "-->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    pQueue obj;
    int choice, value;

    obj.insert(10, 3);
    obj.insert(20, 1);
    obj.insert(30, 5);
    obj.insert(40, 2);
    obj.display();
    return 0;
}