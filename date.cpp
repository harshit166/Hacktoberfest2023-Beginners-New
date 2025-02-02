#include <iostream>
using namespace std;

//function to get date and return weekday number [0-6]
int getWeekDay(int yy, int mm, int dd)
{
    //formula to get weekday number
    int rst = dd
        + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5)
        + (365 * (yy + 4800 - ((14 - mm) / 12)))
        + ((yy + 4800 - ((14 - mm) / 12)) / 4)
        - ((yy + 4800 - ((14 - mm) / 12)) / 100)
        + ((yy + 4800 - ((14 - mm) / 12)) / 400)
        - 32045;

    return (rst + 1) % 7;
}

int main()
{
    //declaring array of weekdays`
    const char* Names[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int day = 0;
    //calling function, storing weekday number in day
    day = getWeekDay(2017, 6, 24);
    cout << "Day : " << Names[day] << endl;
    return 0;
}
