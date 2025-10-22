#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

static bool compare(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.second > p2.second;
    // if (p1.first == p2.first)
    //     return p1.first > p2.first;
    // return p2.first > p2.second;
}

vector<int> topKFrequent(vector<int> nums, int k)
{
    unordered_map<int, int> mpp;

    for (auto i : nums)
    {
        mpp[i]++;
    }

    vector<pair<int, int>> freq(mpp.begin(), mpp.end());

    sort(freq.begin(), freq.end(), compare);

    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        ans.push_back(freq[i].first);
    }

    return ans;
}

int main()
{
    int n;
    if (!(cin >> n))
        return 0;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> ans = topKFrequent(arr, 2);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}