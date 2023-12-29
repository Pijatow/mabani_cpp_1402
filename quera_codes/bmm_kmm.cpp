#include <iostream>
using namespace std;

int main()
{
    int a, b, z, lcm, gcd, t;
    cin >> a >> b;

    if (a > b)
    {
        z = a;
    }
    else
    {
        z = b;
    }

    while (true)
    {
        if (z % a == 0 && z % b == 0)
        {
            lcm = z;
            break;
        }
        z++;
    }
    gcd = (a * b) / lcm;
    cout << gcd << endl;
    cout << lcm << endl;
    return 0;
}