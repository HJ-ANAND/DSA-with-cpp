#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // if (a == 0)
    //     return b;
    // if (b == 0)
    //     return a;
    // int big, small;
    // if (a > b)
    // {
    //     big = a;
    //     small = b;
    // }
    // else
    // {
    //     big = b;
    //     small = a;
    // }
    // int num = big - small;
    // return gcd(num, small);
    a = std::abs(a);
    b = std::abs(b);
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    // Iterative Euclid (mod)
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    // Quick self-test
    pair<int, int> tests[] = {
        {12, 18}, {100, 25}, {17, 13}, {0, 5}, {5, 0}, {-12, 18}, {270, 192}, {1000000000, 1}, {0, 0}};
    for (auto [a, b] : tests)
    {
        cout << "gcd(" << a << "," << b << ") = " << gcd(a, b) << '\n';
    }

    // Or read a single pair from stdin:
    // int a, b; if (cin >> a >> b) cout << gcd(a, b) << '\n';
    return 0;
}