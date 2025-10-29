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
        cout << "Value insert at first. " << endl;
    }

    // INSERT AT LAST

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

    // INSERT AT POSITION

    void insertpos(int item, int pos)
    {
        Node *newNode = new Node();
        newNode->data = item;

        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            if (temp == NULL)
            {
                cout << "Out of Range " << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

        cout << "New Node inserted at position. " << endl;
    }

    // DISPLAY

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

    // DELETE FROM FIRST

    void deleteFirst()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "First Node deleted. " << endl;
        }
    }

    // DELETE FROM LAST

    void deleteLast()
    {
        if (head == NULL)
        {
            cout << "List is empty. " << endl;
        }
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Only 1 Node exist." << endl;
        }
        else
        {
            Node *temp = head;
            Node *prev = NULL;
            while (temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            delete temp;
            cout << "Last Node is deleted. " << endl;
        }
    }

    // DELETE FROM POS

    void deletePos(int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty. " << endl;
        }
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Node deleted" << endl;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < pos - 2; i++)
            {
                if (temp == NULL)
                {
                    cout << "Out of Range. " << endl;
                    return;
                }
                temp = temp->next;
            }
            Node *delNode = temp->next;
            if (delNode == NULL)
            {
                cout << "No node exit" << endl;
                return;
            }
            temp->next = delNode->next;
            delete delNode;
            cout << "Node id deleted from position. " << endl;
        }
    }

    // SEARCH

    void search(int item)
    {
        Node *temp = head;
        bool f = false;
        int i = 0;
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                cout << "Record found at position : " << (i + 1) << endl;
                f = true;
                break;
            }
            i++;
            temp = temp->next;
        }

        if (!f)
            cout << "Record Not found" << endl;
    }

    // COUNT NODE

    void count()
    {
        Node *temp = head;
        int c = 0;
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }

        cout << "Total node in List is - " << c << endl;
    }

    // UPDATE ELEMENT

    bool updateList(int index, int newData)
    {
        Node *temp = head;
        int c = 1;
        while (temp != NULL)
        {
            if (c == index)
            {
                temp->data = newData;
                return true;
            }
            c++;
            temp = temp->next;
        }
        return false; // OUT OF RANGE
    }

    // REVERSE

    void Reverse()
    {
        Node *p = NULL;
        Node *c = head;
        Node *n = NULL;

        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
        cout << "list is reversed;" << endl;
    }
};

int main()
{
    SingleLL obj;
    int choice, value;
    int pos;
    do
    {
        cout << "1. Insert at First " << endl;
        cout << "2. Insert at Last " << endl;
        cout << "3. Insert at Position " << endl;
        cout << "4. Delete from First " << endl;
        cout << "5. Delete from Last " << endl;
        cout << "6. Delete from Pos " << endl;
        cout << "7. Search Element " << endl;
        cout << "8. Count Elements " << endl;
        cout << "9. Update Element " << endl;
        cout << "10. Reverse List " << endl;
        cout << "11. Display " << endl;
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
            cout << "Enter Value : ";
            cin >> value;
            cout << "Enter position : ";
            cin >> pos;
            obj.insertpos(value, pos);
            break;
        case 4:
            obj.deleteFirst();
            break;
        case 5:
            obj.deleteLast();
            break;
        case 6:
            cout << "Enter position : ";
            cin >> pos;
            obj.deletePos(pos);
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
            if (obj.updateList(pos, value))
                cout << "Updated !" << endl;
            else
                cout << "Position not found !" << endl;
            break;
        case 10:
            obj.Reverse();
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