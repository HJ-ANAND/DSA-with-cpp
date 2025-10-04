#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    vector<vector<int>> result;

    for (auto it : mpp)
    {
        result.push_back({it.first, it.second});
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 3};
    vector<vector<int>> freq = countFrequencies(nums);
    for (const auto &pair : freq)
    {
        cout << "[" << pair[0] << "," << pair[1] << "]";
    }
    cout << endl;
    return 0;
}
