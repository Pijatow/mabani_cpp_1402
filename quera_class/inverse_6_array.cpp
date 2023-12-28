#include <iostream>
using namespace std;

int main()
{
    int a[6], i, j;
    for (i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for (j = 5; j > -1; j--)
    {
        cout << a[j];
    }
    return 0;
}