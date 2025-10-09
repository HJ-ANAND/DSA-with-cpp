#include <iostream>
using namespace std;

int countKeyChanges(string s)
{
    int change = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (int(s[i]) - int(s[i + 1]) != 32 && int(s[i]) - int(s[i + 1]) != -32 && int(s[i]) - int(s[i + 1]) != 0)
        {
            change++;
        }
    }
    return change;
}

int main()
{
    string str = "aAbBcC";
    cout << countKeyChanges(str);
    return 0;
}