#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

bool isBeautiful(int num)
{
    unordered_map<char, int> mpp;
    string str = to_string(num);
    for (char &c : str)
        mpp[c]++;
    for (auto &[ch, cnt] : mpp)
        if ((ch - '0') != cnt)
            return false;
    return true;
}

vector<int> generateAll(int x)
{
    vector<int> beautiful;
    for (int i = 1; i < x; i++)
    {
        if (isBeautiful(i))
            beautiful.push_back(i);
    }
    return beautiful;
}

int nextBeautifulNumber(int n)
{
    static vector<int> beautiful = generateAll(10000000);
    auto it = upper_bound(beautiful.begin(), beautiful.end(), n);
    return (it != beautiful.end()) ? *it : -1;
}

// int nextBeautifulNumber(int n)
// {
//     int ans = 0;
//     for (int i = n + 1; i < 10000000; i++)
//     {
//         unordered_map<char, int> mpp;
//         string str = to_string(i);
//         for (char c : str)
//         {
//             mpp[c]++;
//         }

//         bool check = true;

//         for (auto &it : mpp)
//         {
//             if ((it.first - '0') != it.second)
//             {
//                 check = false;
//                 break;
//             };
//         }
//         if (check)
//             return i;
//     }
//     return -1;
// }

int main()
{
    int num = 1000;
    cout << nextBeautifulNumber(num);
    return 0;
}