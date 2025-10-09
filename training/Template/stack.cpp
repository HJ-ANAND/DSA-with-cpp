#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    stack<int> st;
    st.push(23);
    st.push(46);
    st.push(78);
    st.push(34);
    st.push(90);

    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;

    stack<int> temp = st;

    cout << "First stack." << endl;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    stack<int> st2;
    st2.push(20);
    st2.push(30);
    st2.push(40);
    st2.push(50);
    st2.push(60);

    st.swap(st2);
    cout << endl;

    cout << "First stack After swap ." << endl;
    stack<int> temp2 = st;

    while (!temp2.empty())
    {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    cout << endl;

    st2.emplace(200);
    cout << st2.top() << endl;

    return 0;
}