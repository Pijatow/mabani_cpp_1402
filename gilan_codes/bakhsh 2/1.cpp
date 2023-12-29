#include <iostream>
using namespace std;

int main()
{
    float second, hour, minute;
    cin >> second;
    hour = second / 3600;
    minute = second / 60;
    cout << "seconds: " << second;
    cout << "minute: " << minute;
    cout << "hour: " << hour;

    return 0;
}