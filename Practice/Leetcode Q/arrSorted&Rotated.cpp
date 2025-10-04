#include <iostream>
#include <vector>
using namespace std;

bool ifSorted(vector<int> &nums)
{
    int change = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            change = 1;
        }
    }
    if (change == 0)
        return true;
    else
        return false;
}

bool check(vector<int> &nums)
{
    if (ifSorted(nums))
        return true;

    vector<int> tempArr = nums;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int temp = nums[0];
        for (int j = 0; j < nums.size() - 1; j++)
        {
            nums[j] = nums[j + 1];
        }
        nums[nums.size() - 1] = temp;
        if (ifSorted(nums))
            return true;
    }
    return false;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << check(arr);

    return 0;
}