#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << endl;
        temp.pop();
    }
    cout << endl;

    cout << "back is : " << q.back() << endl;

    return 0;
}