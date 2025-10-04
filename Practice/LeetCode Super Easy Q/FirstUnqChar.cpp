// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
// Example 1:
// Input: s = "leetcode"
// Output: 0
// Explanation:
// The character 'l' at index 0 is the first character that does not occur at any other index.
// Example 2:
// Input: s = "loveleetcode"
// Output: 2
// Example 3:
// Input: s = "aabb"
// Output: -1

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int unqChar(string &str)
{
    // string str2 = str;

    // for (int i = 0; i < str.size(); i++)
    // {
    //     str2.erase(i, 1);
    //     if (find(str2.begin(), str2.end(), str[i]) == str2.end())
    //     {
    //         return i;
    //     }
    //     str2 = str;
    // }

    // return -1;

    map<char, int> mpp;
    for (char c : str)
    {
        mpp[c]++;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (mpp[str[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string str = "aabb";

    cout << unqChar(str);

    return 0;
}