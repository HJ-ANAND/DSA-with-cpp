// 26. Remove Duplicates from Sorted Array

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
// Custom Judge:

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    unordered_set<int> arr;
    vector<int> uniqueEle;

    for (int n : nums)
    {
        if (find(arr.begin(), arr.end(), n) == arr.end())
        {
            arr.insert(n);
            uniqueEle.push_back(n);
        }
    }

    for (int i = 0; i < uniqueEle.size(); i++)
    {
        nums[i] = uniqueEle[i];
    }
    return uniqueEle.size();
}

int main()
{
    vector<int> arr = {3, 5, 2, 1, 8, 1, 4, 3};
    cout << removeDuplicates(arr);
    return 0;
}