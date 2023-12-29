#include <iostream>
using namespace std;
int factorial(int n)
{
    int i, f;
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n, i, sign;
    float fact;
    float sum = 0;
    float exp;
    cin >> n;
    sign = 1;
    for (i = 1; i < n + 1; i++)
    {
        fact = factorial(i);
        // cout << fact << endl;
        exp = 1 / fact;
        cout << sign * exp << endl;
        sum += sign * exp;
        switch (sign)
        {
        case 1:
            sign = -1;
            break;

        case -1:
            sign = 1;
            break;
        }
    }
    cout << sum;
    return 0;
}