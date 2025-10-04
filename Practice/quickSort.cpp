#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high], i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // swap
            // int temp = arr[i];
            // arr[i] = arr[j];
            // arr[j] = temp;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    // int temp = arr[i];
    // arr[i] = pivot;
    // arr[high] = temp;
    swap(arr[i], arr[high]);
    return i; // pivot index
}

void quickSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int pivot = partition(arr, left, right);

        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

int main()
{
    vector<int> arr = {6, 3, 9, 5, 2, 8};

    quickSort(arr, 0, arr.size() - 1);

    // print
    // for (int i = 0; i < arr.size() - 1; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for (int val : arr)
    {
        cout << val << " ";
    }
}
