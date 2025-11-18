#include <iostream>
using namespace std;

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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

    selectionSort(arr, n1);

    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}