#include <iostream>
using namespace std;

int main()
{
    int k, l, count;
    cin >> count;

    for (k = 1; k <= count; k++)
    {
        for (l = 1; l <= k; l++)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}