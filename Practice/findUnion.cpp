#include <iostream>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int> num1, vector<int> num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    int i = 0, j = 0;
    vector<int> Uarr;
    while (i < n1 && j < n2)
    {
        if (num1[i] < num2[j])
        {
            if (Uarr.size() == 0 || Uarr.back() != num1[i])
            {
                Uarr.push_back(num1[i]);
            }
            i++;
        }
        else if (num1[i] > num2[j])
        {
            if (Uarr.size() == 0 || Uarr.back() != num2[j])
            {
                Uarr.push_back(num2[j]);
            }
            j++;
        }
        else
        {
            if (Uarr.size() == 0 || Uarr.back() != num1[i])
            {
                Uarr.push_back(num1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        if (Uarr.size() == 0 || Uarr.back() != num1[i])
        {
            Uarr.push_back(num1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (Uarr.size() == 0 || Uarr.back() != num2[j])
        {
            Uarr.push_back(num2[j]);
        }
        j++;
    }
    return Uarr;
}

int main()
{
    vector<int> arr1 = {3, 4, 6, 7, 9, 9};
    vector<int> arr2 = {1, 5, 7, 8, 8};
    vector<int> Uarr = unionArray(arr1, arr2);
    for (int n : Uarr)
    {
        cout << n << " ";
    }
    return 0;
}