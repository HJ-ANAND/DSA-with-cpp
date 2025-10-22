#include <iostream>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strs)
{
    vector<vector<string>> final;
    // unordered_map<string, vector<string>> mpp;
    // for (auto &s : strs)
    // {
    //     string tempstr = s;
    //     sort(tempstr.begin(), tempstr.end());
    //     mpp[tempstr].push_back(s);
    // }
    // for (auto &x : mpp)
    // {
    //     final.push_back(move(x.second));
    // }
    // return final;

    map<array<int, 26>, vector<string>> mpp;
    for (auto &s : strs)
    {
        array<int, 26> count{};
        for (char c : s)
        {
            count[c - 'a']++;
        }
        mpp[count].emplace_back(s);
    }
    for (auto &x : mpp)
    {
        final.emplace_back(move(x.second));
    }
    return final;
}

int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<string> strs(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> strs[i];
    }

    vector<vector<string>> temp = groupAnagrams(strs);
    for (auto i : temp)
    {
        for (auto u : i)
        {
            cout << u << " ";
        }
    }
    cout << endl;
    return 0;
}
