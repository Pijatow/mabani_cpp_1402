#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                if (a * a + b * b == c * c)
                {
                    cout << "True";
                    return 0;
                }
            }
        }
    }
    cout << "false";
    return 0;
}