#include <iostream>
using namespace std;

template <typename T>

T show(T x, T y, T z)
{
    // T val = (x >= y) ? x : y;
    // return val;
    // if (x >= y && x >= z)
    // {
    //     return x;
    // }
    // else if (y >= x && y >= z)
    // {
    //     return y;
    // }
    // else
    // {
    //     return z;
    // }
    return (x >= y && x >= z) ? x : (y >= x && y >= z) ? y
                                                       : z;
}

int main()
{
    cout << show<int>(5, 6, 8) << endl;
    cout << show<float>(4.5, 6.8, 0.5) << endl;
    cout << show<long>(8, 6, 12) << endl;
    cout << show<string>("Hello ", "World", "hi") << endl;
    return 0;
}
