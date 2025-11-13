#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int> nums)
{
    vector<int> result;
    int n = nums.size();

    result.push_back(nums[n - 1]);

    int big = nums[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > big)
        {
            result.push_back(nums[i]);
            big = nums[i];
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    vector<int> demo = {1, 2, 5, 3, 1, 2};
    vector<int> ans = leaders(demo);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}