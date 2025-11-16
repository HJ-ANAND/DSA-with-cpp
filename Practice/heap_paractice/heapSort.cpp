#include <iostream>
using namespace std;

// why we taking index 0 empty, can't we take use of that too ? if yes then how

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int value)
    {
        size += 1;
        int index = size;
        arr[index] = value;

        // Creating max heap
        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "Nothing to delelte. " << endl;
            return;
        }

        // step 1 - put last element at 1st idx
        arr[1] = arr[size];
        // step 2 - decrease the size
        size--;

        // step 3 - take root to its correct position

        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;

            if (left < size && arr[left] > arr[i])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[right] > arr[i])
            {
                swap(arr[right], arr[i]);
                i = right;
            }
            else
                return;
        }
    }

    void display()
    {
        for (int i = 1; i <= size; i++) // why we used size and can't use arr.size();
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int idx)
{
    int largest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != idx)
    {
        swap(arr[largest], arr[idx]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int t = n - 1;

    while (t > 0)
    {
        swap(arr[0], arr[t]);
        heapify(arr, t, 0);
        t--;
    }
}

int main()
{
    // heap h;
    // int n, val;
    // cout << "Enter No. of elements in array : ";
    // cin >> n;

    // while (n--)
    // {
    //     cout << "Enter Value : ";
    //     cin >> val;
    //     h.insert(val);
    // }

    // h.display();
    // h.Delete();
    // h.display();

    int arr[5] = {54, 53, 55, 52, 50};
    int num = 5;

    cout << "Original Array is : " << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    // heap creation
    for (int i = num / 2; i >= 0; i--)
    {
        heapify(arr, num, i);
    }

    // cout << "Array after heapify is : " << endl;
    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    // heap sort applying here
    heapSort(arr, num);
    cout << "Array after heapSort is : " << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}