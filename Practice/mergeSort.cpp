#include <iostream>
#include <vector>
using namespace std;

vector<int> conquer(int *arr, int st, int mid, int end)
{
    int merged[] = new int[end - st + 1];

    int idx1 = st;
    int idx2 = end;
    int x = 0;

    while (idx1 <= mid && idx2 <= end)
    {
        if (arr[idx1] <= arr[idx2])
        {
            merged[x++] = arr[idx1++];
        }
        else
        {
            merged[x++] = arr[idx2++];
        }
    }

    while (idx1 <= mid)
    {
        merged[x++] = arr[idx1++];
    }

    while (idx2 <= end)
    {
        merged[x++] = arr[idx2++];
    }
    return arr;
}

void divide(int *arr, int st, int end)
{
    if (st >= end)
    {
        return;
    }

    int mid = st + (end - st) / 2;
    divide(arr, st, mid);
    divide(arr, mid + 1, end);

    conquer(arr, st, mid, end);
}

int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = 6;
}