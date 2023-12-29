#include <iostream>
using namespace std;

int main()
{
    int a, b, temp, count, i;
    count = 0;
    a = b = 1;
    cout << a << endl << b << endl;
    for (i = 0; i < 50 - 2; i++)
    {
        temp = a + b;
        cout << temp << endl;
        a = b;
        b = temp;
    }
    return 0;
}