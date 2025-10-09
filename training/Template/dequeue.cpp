#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(20);
    dq.push_front(40);
    dq.push_front(60);
    dq.push_back(10);
    dq.push_back(30);
    dq.push_back(50);

    cout << "Initial queue is: " << endl;
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "3rd element is : " << dq.at(2) << endl;

    auto ptr = find(dq.begin(), dq.end(), 50);
    if (ptr != dq.end())
    {
        cout << "Element find." << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    reverse(dq.begin(), dq.end());
    cout << "dq after reverse: " << endl;
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(dq.begin(), dq.end());
    cout << "After sort : " << endl;

    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    auto n = dq.end();
    --n;
    cout << *n;
    return 0;
}