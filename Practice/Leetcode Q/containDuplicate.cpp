#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mpp;
    for (int i : nums)
    {
        if (mpp[i] >= 1)
        {

            return true;
        }

        mpp[i]++;
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    cout << containsDuplicate(arr);
    return 0;
}