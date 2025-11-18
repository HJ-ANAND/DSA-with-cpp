#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n1)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter Number of Element in Array : ";
    cin >> n;
    int n1 = n;

    int arr[n];

    int i = 0;
    while (n--)
    {
        cout << "Enter value : ";
        cin >> arr[i];
        i++;
    }

    cout << "Original Array : " << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    bubbleSort(arr, n1);

    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}