#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value = 0)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLL
{
public:
    Node *head;

    DoublyLL()
    {
        head = NULL;
    }

    void insertfirst(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
            head = newNode;
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        cout << "Node Inserted at first ." << endl;
    }

    void insertlast(int value)
    {
        Node *newNode = new Node(value);
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
            newNode->prev = temp;
        }
        cout << "Node inserted at the end." << endl;
    }

    void insertPos(int value, int pos)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            cout << "Inserted" << endl;
            return;
        }
        Node *temp = head;

        for (int i = 1; i < pos; i++)
        {
            if (temp == NULL)
            {
                cout << "Out of Range" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next = newNode;
        temp->next->prev = newNode;

        cout << "Inserted at position." << endl;
    }

    void deleteFirst()
    {
        if (head == NULL)
            cout << "List is Empty" << endl;
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted 1st Node." << endl;
        }
    }

    void deleteLast()
    {
        if (head == NULL)
            cout << "List is Empty" << endl;
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Deleted single Node" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete temp;
            cout << "Deleted Last Node." << endl;
        }
    }

    void display()
    {
        if (head == NULL)
            cout << "List is Empty." << endl;
        else
        {
            Node *temp = head;
            while (temp)
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
    DoublyLL obj;
    int choice, value, pos;
    do
    {
        cout << "1. Insert First " << endl;
        cout << "2. Insert At Last " << endl;
        cout << "3. Insert At Pos " << endl;
        cout << "4. Delete First " << endl;
        cout << "5. Delete Last " << endl;
        cout << "6. Display " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value :";
            cin >> value;
            obj.insertfirst(value);
            break;
        case 2:
            cout << "Enter Value :";
            cin >> value;
            obj.insertlast(value);
            break;
        case 3:
            cout << "Enter Value :";
            cin >> value;
            cout << "Enter Position : ";
            cin >> pos;
            obj.insertPos(value, pos);
            break;
        case 4:
            obj.deleteFirst();
            break;
        case 5:
            obj.deleteLast();
            break;
        case 6:
            obj.display();
            break;
        default:
            break;
        }
    } while (choice != 7);
    return 0;
}