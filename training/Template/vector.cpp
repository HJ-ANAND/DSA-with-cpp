#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {11, 22, 33, 44, 55};
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << vec.at(2) << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.pop_back();
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    vec.resize(10);
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end());

    cout << "After sort :" << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec1 = {11, 22, 33, 44, 55};
    bool eq = equal(vec.begin(), vec.end(), vec1.begin());
    if (eq)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
    return 0;
}