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
            if (head != NULL)
                head->prev = NULL;
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

    void deletepos(int pos)
    {
        if (head == NULL)
        {
            cout << "No list Exist." << endl;
            return;
        }
        if (pos == 1)
        {
            deleteFirst();
            return;
        }
        Node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            if (temp == NULL || temp->next == NULL)
            {
                cout << "Out of Range" << endl;
                return;
            }
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            deleteLast();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
        cout << "Node deleted from position." << endl;
    }

    void search(int val)
    {
        if (head == NULL)
            cout << "List is empty." << endl;
        Node *temp = head;
        int i = 0;
        while (temp->next)
        {
            if (temp->data == val)
            {
                cout << "value found at position " << (i + 1) << endl;
                return;
            }
            i++;
            temp = temp->next;
        }
        cout << "Couldn't found value" << endl;
    }

    void count()
    {
        Node *temp = head;
        int c = 1;
        while (temp->next)
        {
            c++;
            temp = temp->next;
        }
        cout << "No. of elements in List are " << c << endl;
    }

    void updateValue(int value, int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        pos--;
        while (pos--)
        {
            if (temp == NULL || temp->next == NULL)
            {
                cout << "Out of range" << endl;
                return;
            }
            temp = temp->next;
        }
        temp->data = value;
        cout << "Value Updated." << endl;
    }

    void reverse()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *curr = head;
        Node *temp = NULL;
        while (curr)
        {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }
        if (temp)
        {
            head = temp->prev;
        }
        cout << "List after reverse :" << endl;
        display();
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
        cout << "3. Insert At Position " << endl;
        cout << "4. Delete First " << endl;
        cout << "5. Delete Last " << endl;
        cout << "6. Delete From Position " << endl;
        cout << "7. Search element " << endl;
        cout << "8. Count elements " << endl;
        cout << "9. Update Value " << endl;
        cout << "10. Reverse List " << endl;
        cout << "11. Display " << endl;
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
            cout << "Enter Position : ";
            cin >> pos;
            obj.deletepos(pos);
            break;
        case 7:
            cout << "Enter element : ";
            cin >> value;
            obj.search(value);
            break;
        case 8:
            obj.count();
            break;
        case 9:
            cout << "Enter Element : ";
            cin >> value;
            cout << "Enter Position : ";
            cin >> pos;
            obj.updateValue(value, pos);
            break;
        case 10:
            obj.reverse();
            break;
        case 11:
            obj.display();
            break;
        default:
            break;
        }
    } while (choice != 12);
    return 0;
}