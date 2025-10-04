#include <iostream>
using namespace std;

template <typename T>

T show(T x, T y)
{
    return (x + y);
}

int main()
{
    cout << show<int>(4, 5) << endl;
    cout << show<float>(4.5, 6.8) << endl;
    cout << show<string>("Hello ", "World") << endl;
    return 0;
}