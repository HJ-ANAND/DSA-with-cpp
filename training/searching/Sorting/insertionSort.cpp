#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    insertionSort(arr, n1);

    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}