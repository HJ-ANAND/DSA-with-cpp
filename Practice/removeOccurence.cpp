#include <iostream>
using namespace std;

int main()
{
    string s, part;
    cout << "Enter The String. ";
    cin >> s;
    cout << "Enter The Part. ";
    cin >> part;

    while ((s.length() > 0) && (s.find(part) < s.length()))
    {
        s.erase(s.find(part), part.length());
    }

    cout << part;
    return 0;
}