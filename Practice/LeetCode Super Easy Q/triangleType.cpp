#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

string triangleType(vector<int> &nums)
{
    if (nums[0] + nums[1] <= nums[2] || nums[0] + nums[2] <= nums[1] || nums[1] + nums[2] <= nums[0])
    {
        return "none";
    }
    unordered_map<int, int> mpp;
    for (int i : nums)
    {
        mpp[i]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 3)
        {
            return "equilateral";
        }
        else if (it.second == 2)
        {
            return "isosceles";
        }
    }
    return "scalene";
}

int main()
{
    vector<int> arr = {5, 3, 8};
    cout << triangleType(arr);
    return 0;
}