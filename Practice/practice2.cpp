#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i = 0;
    int f1 = 0;
    int f2 = 1;
    int sum = 0;
    while (i < 4)
    {
        cout << sum << endl;
        f1 = f2;
        f2 = sum;
        sum = f1 + f2;
        i++;
    }

    cout << "sum = " << sum;
}