#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool isAnagram(string &s1, string &s2)
{
    if (s1.size() != s2.size())
        return false;

    unordered_map<char, int> mpp;
    for (auto c : s1)
        mpp[c]++;
    for (int i = 0; i < s2.size(); i++)
    {
        if (mpp.find(s2[i]) != mpp.end())
        {
            mpp[s2[i]]--;
        }
        else
        {
            return false;
        }
    }
    for (auto it : mpp)
    {
        if (it.second != 0)
            return false;
    }
    return true;
}

int main()
{
    string str1 = "racecar";
    string str2 = "carrace";
    cout << isAnagram(str1, str2);
    return 0;
}