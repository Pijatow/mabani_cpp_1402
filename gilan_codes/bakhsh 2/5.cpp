#include <iostream>
using namespace std;

int main()
{
    int num, count, i, sum;
    sum = 0;
    count = 0;
    cin >> num;
    for (i = 1; count < num; i += 2)
    {
        sum += i;
        count++;
    }
    cout << sum;
    return 0;
}