#include <iostream>
#include <vector>
using namespace std;

bool threeConsecutiveOdds(vector<int> &arr)
{
    if (arr.size() < 3)
        return false;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << threeConsecutiveOdds(nums);
    return 0;
}