#include <iostream>
using namespace std;
#define n 100

int main()
{
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] * 3 << endl;
    }
    return 0;
}