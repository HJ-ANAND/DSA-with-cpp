#include <iostream>
using namespace std;

class ArrayOperations
{
    int size;
    int arr[100];

public:
    ArrayOperations(int s)
    {
        size = s;
    }

    // Function to input array elements

    void inputElement()
    {
        cout << "Input " << size << " elements : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element no. " << i + 1 << " : ";
            cin >> arr[i];
        }

        cout << "Element are inserted successfully" << endl;
    }

    // function to display element

    void displayElemetn()
    {
        cout << "Your input array is : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void getElement(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index !" << endl;
        }
        else
        {
            cout << "The element at the index " << index << " is " << arr[index] << endl;
        }
    }

    void deleteElement(int value)
    {
        int pos = -1;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        for (int i = pos; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element deleted successfully !" << endl;
    }

    void search(int value)
    {
        int place = 1;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                cout << "Element Found at position : " << place << endl;
                return;
            }
            place++;
        }

        cout << "Value couldn't find." << endl;
    }

    // BUBBLE SORT

    void bubbleSort()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "Array sorted successfully" << endl;
    }
};

int main()
{
    int size, index, choice, value;
    cout << "Enter the array size : ";
    cin >> size;

    ArrayOperations obj(size);

    do
    {
        cout << "1. Input elements : " << endl;
        cout << "2. Display elements : " << endl;
        cout << "3. Get element at an index : " << endl;
        cout << "4. Delete Element : " << endl;
        cout << "5. Search Element : " << endl;
        cout << "6. Bubble Sort element : " << endl;
        cout << "7. Reverse Array : " << endl;
        cout << "8. Exit the program...." << endl;
        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.inputElement();
            break;
        case 2:
            obj.displayElemetn();
            break;
        case 3:
            cout << "Input the index : ";
            cin >> index;
            obj.getElement(index);
            break;
        case 4:
            cout << "Enter value : ";
            cin >> value;
            obj.deleteElement(value);
            break;
        case 5:
            cout << "Enter value : ";
            cin >> value;
            obj.search(value);
            break;
        case 6:
            obj.bubbleSort();
            break;
        case 7:
            cout << "Exiting the program...." << endl;
            return 0;
        default:
            break;
        }
    } while (choice != 10);
    return 0;
}