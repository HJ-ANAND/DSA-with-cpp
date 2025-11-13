#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int value)
    {
        if (top == size - 1)
            cout << "Stack Overflow! Cannot push " << value << endl;
        else
        {
            arr[++top] = value;
            cout << value << " pushed onto stack." << endl;
        }
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow! Nothing to pop." << endl;
        else
            cout << arr[top--] << " popped from stack." << endl;
    }

    int topElement()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        else
            return arr[top];
    }

    void deleteElement(int value)
    {
        if (top == -1)
        {
            cout << "Stack is empty! Cannot delete." << endl;
            return;
        }

        Stack temp(size);
        bool found = false;

        while (top != -1)
        {
            int val = arr[top--];
            if (val == value)
            {
                found = true;
                break;
            }
            else
                temp.push(val);
        }

        while (temp.top != -1)
            push(temp.arr[temp.top--]);

        if (found)
            cout << "Deleted element " << value << " from stack." << endl;
        else
            cout << "Element " << value << " not found in stack." << endl;
    }

    void deleteStack()
    {
        top = -1;
        cout << "Stack cleared successfully." << endl;
    }

    void display()
    {
        if (top == -1)
            cout << "Stack is empty." << endl;
        else
        {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    int size, choice, value;
    cout << "Enter stack size: ";
    cin >> size;

    Stack s(size);

    do
    {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Top Element\n";
        cout << "5. Delete Specific Element\n";
        cout << "6. Delete Stack\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.display();
            break;

        case 4:
            value = s.topElement();
            if (value != -1)
                cout << "Top element: " << value << endl;
            break;

        case 5:
            cout << "Enter element to delete: ";
            cin >> value;
            s.deleteElement(value);
            break;

        case 6:
            s.deleteStack();
            break;

        case 7:
            cout << "Exiting........." << endl;
            break;

        default:
            break;
        }
    } while (choice != 8);
}