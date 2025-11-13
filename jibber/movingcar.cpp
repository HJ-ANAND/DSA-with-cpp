#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    const int linelength = 50;
    const int maxcarpos = linelength - 1;
    int carpos = 0;

    auto clearScreen = []()
    {
        system("clear");
    };

    string car = "[=C=]";
    while (true)
    {
        clearScreen();

        for (int i = 0; i < linelength; i++)
        {
            if (i == carpos)
            {
                cout << car;
            }
            else
            {
                cout << "_";
            }
        }

        cout << endl;

        carpos++;
        if (carpos > maxcarpos)
        {
            carpos = 0;
        }

        this_thread::sleep_for(chrono::milliseconds(100));
    }
    return 0;
}