#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 1};
    cout << findMaxConsecutiveOnes(arr);
    return 0;
}