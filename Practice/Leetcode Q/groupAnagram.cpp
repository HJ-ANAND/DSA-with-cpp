#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strs)
{
    vector<vector<string>> final;
    // map<string, int> mpp;
    // for(auto i : strs){
    //     vector<string> str;
    //     string tempstr = i;
    //     sort(tempstr.begin(), tempstr.end());
    //     if(mpp.find(tempstr) != mpp.end()){
    //         str.push_back(i);
    //     }mpp[i]++;
    // }

    for (int i = 0; i < strs.size(); i++)
    {
        bool found = false;
        for (auto u : final)
        {
            for (auto k : u)
            {
                if (k == strs[i])
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
            continue;
        vector<string> str = {strs[i]};
        string tempstr = strs[i];
        sort(tempstr.begin(), tempstr.end());
        for (int j = i + 1; j < strs.size(); j++)
        {
            string tempstr2 = strs[j];
            sort(tempstr2.begin(), tempstr2.end());
            if (tempstr == tempstr2)
            {
                str.push_back(strs[j]);
            }
        }
        final.push_back(str);
        str = {};
    }
    return final;
}

int main()
{
    vector<string> strs = {"act", "pots", "tops", "cat", "stop", "hat"};
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