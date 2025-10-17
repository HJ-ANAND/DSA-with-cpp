#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 1, 2, 4, 5, 1, 2, 4, 3, 1, 1, 4, 5};
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    int val = 15;
    auto pos = next(s.begin(), 2);
    s.insert(pos, val);
    cout << "After insert : " << endl;
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    auto n = s.end();
    --n;
    cout << *n << endl;
    return 0;
}