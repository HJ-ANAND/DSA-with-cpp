#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'A';
        throw 10;
        throw "Hello";
    }
    catch (const char *e)
    {
        cout << "String : " << e << endl;
    }
    catch (int i)
    {
        cout << "Int : " << i << endl;
    }
    catch (char j)
    {
        cout << "Char : " << j << endl;
    }
    // catch (...)
    // {
    //     cout << "Error : " << endl;
    // }
}