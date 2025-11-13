#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class circularSingleLL
{
public:
    Node *head;

    circularSingleLL()
    {
        head = NULL;
    }

    // Insert at first
    void insertFirst(int item)
    {
        Node *newNode = new Node();
        newNode->data = item;

        if (head == NULL)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }

        cout << "Node Inserted at first." << endl;
    }

    // Insert at Last
    void insertLast(int item)
    {
        Node *newNode = new Node();
        newNode->data = item;

        if (head == NULL)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
        cout << "Node Inserted at Second." << endl;
    }

    void insertPos(int item, int pos)
    {
        Node *newNode = new Node();
        newNode->data = item;
        if (head == NULL)
        {
            cout << "Position not available." << endl;
            return;
        }
        Node *temp = head;
        pos--;
        while (pos--)
        {
            if (temp->next == head)
            {
                cout << "Out of range" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

        cout << "New Node is Inserted at postion. " << endl;
    }

    void deleteFirst()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        else if (head->next == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = head->next;
            temp = head;
            head = temp->next;
            delete temp;
        }

        cout << "Node Deleted from first." << endl;
    }

    void deleteLast()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        else if (head->next == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            Node *prev = NULL;
            while (temp->next != head)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
        cout << "Node deleted from Last." << endl;
    }

    void deletePos(int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (pos == 1)
        {
            deleteFirst();
            return;
        }
        Node *temp = head;
        Node *prev = NULL;
        pos--;
        while (pos--)
        {
            if (temp->next == head)
            {
                cout << "Out of range. " << endl;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;

        cout << "Node deleted from Position." << endl;
    }

    void search(int item)
    {
        if (head == NULL)
        {
            cout << "List is empty. " << endl;
            return;
        }
        Node *temp = head;
        if (temp->data == item)
        {
            cout << "Item present at position 1." << endl;
            return;
        }
        temp = temp->next;
        int num = 2;
        while (temp != head)
        {
            if (temp->data == item)
            {
                cout << "Item Present at position " << num << endl;
                return;
            }
            num++;
            temp = temp->next;
        }

        cout << "No record found. " << endl;
    }

    void count()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        int count = 1;
        temp = temp->next;
        while (temp != head)
        {
            count++;
            temp = temp->next;
        }
        cout << "total no. of Elements are " << count << endl;
    }

    void update(int item, int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        if (pos == 1)
        {
            head->data = item;
            cout << "Item Updated at position." << endl;
            return;
        }
        Node *temp = head;
        pos--;
        while (pos--)
        {
            if (temp->next == head)
            {
                cout << "Out of bound." << endl;
                return;
            }
            temp = temp->next;
        }
        temp->data = item;
        cout << "Item Updated at position." << endl;
    }

    void reverse()
    {
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << temp->data << "-->";
        // cout << temp->data << "-->";
        // temp = temp->next;
        // while (temp != head)
        // {
        //     cout << temp->data << "-->";
        //     temp = temp->next;
        // }
        // cout << "head = " << temp->data << endl;
        cout << "head = " << temp->next->data << endl;
    }
};

int main()
{
    circularSingleLL obj;
    int choice, value, pos;

    do
    {
        cout << "1. Insert at first " << endl;
        cout << "2. Insert at Last " << endl;
        cout << "3. Insert at Position " << endl;
        cout << "4. Delete First " << endl;
        cout << "5. Delete Last " << endl;
        cout << "6. Delete From Position " << endl;
        cout << "7. Search Element " << endl;
        cout << "8. Count Elements " << endl;
        cout << "9. Update Element " << endl;
        cout << "10. Reverse List " << endl;
        cout << "11. Display List " << endl;
        cout << "Enter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> value;
            obj.insertFirst(value);
            break;
        case 2:
            cout << "Enter Value : ";
            cin >> value;
            obj.insertLast(value);
            break;
        case 3:
            cout << "Enter Value : ";
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
            obj.deletePos(pos);
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
            cout << "Enter Value : ";
            cin >> value;
            cout << "Enter Position : ";
            cin >> pos;
            obj.update(value, pos);
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
    } while (choice != 20);
    return 0;
}