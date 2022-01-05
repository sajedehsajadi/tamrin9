#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
public:
    int hour, minute, second;
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void show();
    void sum(Time s);
    void tafrigh(Time s);
    void s_t();
    void t_s();

};
void Time::show()
{
    cout << "your time is->\t" << hour << ":" << minute << ":" << second;

}
void Time::sum(Time s)
{
    int x = second, y = hour, z = minute;
    second += s.second;
    minute += s.minute + (second / 60);
    hour += s.hour + (minute / 60);
    minute = minute % 60;
    second = second % 60;
    cout << hour << ":" << minute << ":" << second;
    second = x;
    hour = y;
    minute = z;

}
void Time::tafrigh(Time s)
{
    int x = second, y = hour, z = minute;
    if (s.second > second)
    {
        minute=minute-1;
        second += 60;
    }

    second -= s.second;
    if (s.minute > minute)
    {
        hour=hour-1;
        minute += 60;
    }
    minute -= s.minute;
    hour -= s.hour;
    cout << hour << ":" << minute << ":" << second;
    second = x;
    hour = y;
    minute = z;
}
void Time::s_t()
{
    int x = second, y = hour, z = minute;
    if (second >= 3600) {
        hour = second / 3600;
    }
    int m = second % 3600;
    if (m >= 60) {
        minute = (second % 3600) / 60;
    }
    int n = second - ((hour * 3600) + (minute * 60));
    if (n >= 0) {
        second = second - ((hour * 3600) + (minute * 60));
    }
    cout << hour << ":" << minute << ":" << second;
    second = x;
    hour = y;
    minute = z;

}
void Time::t_s()
{
    int x = second, y = hour, z = minute;
    hour *= 3600;
    minute *= 60;
    second = hour + minute + second;
    cout << second;
    second = x;
    hour = y;
    minute = z;
}
int main()
{
    int hour, min, sec;
    int hour2, min2, sec2;
    Time re(0, 0, 0);
    Time rt(0, 0, 0);
    cout << "enter the first time\t\t";
    cout << "enter hour\n";
    cin >> hour;
    while (hour > 24)
    {
        cout << "error\n";
        cin >> hour;
    }
    cout << "enter minute\n";
    cin >> min;
    while (min > 60)
    {
        cout << "error\n";
        cin >> min;
    }
    cout << "enter second\n";
    cin >> sec;
    while (sec > 60)
    {
        cout << "error";
        cin >> sec;
    }
    Time re(hour, min, sec);
    cout << "enter the second time\t\t";
    cout << "enter hour\n";
    cin >> hour2;
    while (hour2 > 24)
    {
        cout << "error\n";
        cin >> hour2;
    }
    cout << "enter minute\n";
    cin >> min2;
    while (min2 > 60)
    {
        cout << "error\n";
        cin >> min2;
    }
    cout << "enter second\n";
    cin >> sec2;
    while (sec2 > 60)
    {
        cout << "error";
        cin >> sec2;
    }
    Time rt(hour, min, sec);
    re.show();
    cout << '\n';
    rt.show();
    cout << '\n';
    re.sum(rt);
    cout << '\n';
    re.tafrigh(rt);
    cout << '\n';
    re.t_s();
    cout << '\n';
    rt.t_s();
}