#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> lis;
    int n;
    cout << "Enter number of values : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        lis.push_back(v);
    }

    for (int i : lis)
    {
        cout << i << " ";
    }
    cout << endl;

    // cout << lis.front();
    // cout << lis.back();
    int x = 99;
    int z = 200;
    lis.insert(lis.begin(), x);
    auto pos = next(lis.begin(), 2);
    lis.insert(pos, z);
    for (int i : lis)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}