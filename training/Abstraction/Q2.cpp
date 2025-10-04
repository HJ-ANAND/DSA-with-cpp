#include <iostream>
#include <iomanip>
using namespace std;

class TIME
{
    int hours, minutes, seconds;

public:
    TIME()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    TIME(int hours, int minutes, int seconds)
    {
        hours = 1;
        minutes = 10;
        seconds = 15;
    }

    void input()
    {
        cout << "Hour: ";
        cin >> hours;
        cout << "Minutes: ";
        cin >> minutes;
        cout << "Seconds: ";
        cin >> seconds;
    }

    void display()
    {
        // cout << "Time is : " << hours << " : " << minutes << " : " << seconds << endl;
        cout << "Time is : " << setfill('0') << setw(2) << hours << " : "
             << setfill('0') << setw(2) << minutes << " : "
             << setfill('0') << setw(2) << seconds << endl;
    }
    TIME add(TIME t)
    {
        TIME temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;

        if (temp.seconds >= 60)
        {
            temp.minutes = temp.minutes + (temp.seconds / 60);
            temp.seconds = temp.seconds % 60;
        }
        if (temp.minutes >= 60)
        {
            temp.hours = temp.hours + (temp.minutes / 60);
            temp.minutes = temp.minutes % 60;
        }

        return temp;
    }
};

int main()
{
    TIME t1, t2;
    cout << "For 1st time: " << endl;
    t1.input();
    cout << "For 2nd time: " << endl;
    t2.input();

    TIME t3 = t1.add(t2);
    t3.display();
    return 0;
}