#include <iostream>
#include <map>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int num = 0;
    // map<int, int> mpp;
    // for (int i : nums)
    // {
    //     mpp[i]++;
    // }
    // for (auto it : mpp)
    // {
    //     if (it.second == 1)
    //     {
    //         num = it.first;
    //     }
    // }

    // return num;
    for (int i : nums)
    {
        num ^= i;
    }
    return num;
}

int main()
{
    vector<int> arr = {2, 4, 4, 1, 2, 1, 3};
    cout << singleNumber(arr);
    return 0;
}