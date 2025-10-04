#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *obj = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> obj[i];
    }

    int max = obj[0];
    int min = obj[0];

    for (int i = 0; i < n; i++)
    {
        if (max < obj[i])
        {
            max = obj[i];
        }
        if (min > obj[i])
        {
            min = obj[i];
        }
    }

    cout << max << "  " << min;
    delete obj;
    return 0;
}