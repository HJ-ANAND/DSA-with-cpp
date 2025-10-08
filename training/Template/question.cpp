#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(45);
    li.push_back(60);
    li.push_front(30);
    li.push_back(40);

    for (auto i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << li.front() << endl;
    cout << li.back() << endl;

    li.pop_front();
    li.pop_back();
    cout << "After pop front and back :" << endl;
    for (auto i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    int z = 200;
    auto pos = next(li.begin(), 1);
    li.insert(pos, z);
    cout << "After insert :" << endl;
    for (int i : li)
    {
        cout << i << " ";
    }
    cout << endl;
    auto pos2 = next(li.begin(), 1);
    li.erase(pos2);
    cout << "After erase :" << endl;
    for (int i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> li2 = {25, 41, 23, 20, 20};
    li.swap(li2);
    cout << "After swap list 1 :" << endl;

    for (int i : li)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After swap list 2 :" << endl;
    for (int i : li2)
    {
        cout << i << " ";
    }
    cout << endl;

    li.sort();
    cout << "List after sort:" << endl;
    for (int i : li)
    {
        cout << i << " ";
    }
    cout << endl;
    reverse(li.begin(), li.end());
    cout
        << "List after reverse:" << endl;
    for (int i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    // if (li.empty() != false)
    // {
    //     cout << "Not empty" << endl;
    // }
    // else
    // {
    //     cout << "Empty" << endl;
    // }

    li.remove(20);
    for (auto i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    auto ptr = find(li.begin(), li.end(), 41);
    if (ptr != li.end())
    {
        cout << "Value found" << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}