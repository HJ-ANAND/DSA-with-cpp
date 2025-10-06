#include <iostream>
#include <array>     //container
#include <algorithm> //to apply logic
using namespace std;

int main()
{
    array<int, 10> arr = {5, 7, 3, 1, 8, 4, 2, 1, 5, 7}; // generic(java), template(cpp)
    array<int, 10> arr1 = {
        55,
        4,
        1,
        7,
        98,
        2,
        6,
        5,
        8,
        44,
    };
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    // cout << arr.empty() << endl;
    // cout << arr.front() << endl;
    // cout << arr.back() << endl;
    // cout << arr.begin() << endl;
    // cout << arr.end() << endl;
    // cout << arr.at(2) << endl;
    // cout << arr.data() << endl;
    // address of 1st element
    // cout << arr.count() <<endl;
    sort(arr.begin(), arr.end());

    cout << "Sorted : ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    reverse(arr.begin(), arr.end());
    cout << "Reverse : ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // int se;
    // cout << "Enter value to search : ";
    // cin >> se;
    // auto x = find(arr.begin(), arr.end(), se);
    // if (x != arr.end())
    // {
    //     cout << "value found at index : " << x - arr.begin() << endl;
    // }
    // else
    // {
    //     cout << "value not found" << endl;
    // }

    int y = count(arr.begin(), arr.end(), 7);
    cout << "count of 7 is : " << y << endl;

    auto max = max_element(arr.begin(), arr.end());
    auto min = min_element(arr.begin(), arr.end());
    cout << "Max element is : " << *max << endl;
    cout << "Min element is : " << *min << endl;

    auto z = remove(arr.begin(), arr.end(), 1);
    int n = distance(arr.begin(), z);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.swap(arr1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    array<int, 5> newArr;
    newArr.fill(100);
    for (int i : newArr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}