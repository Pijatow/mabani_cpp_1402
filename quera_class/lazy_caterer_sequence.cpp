#include <iostream>
using namespace std;

int main()
{
    int n, a, dif, sign, i;
    a = 1;
    dif = 1;
    sign = 1;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        cout << sign * a << ",";
        a += dif;
        dif += 1;
        if(sign == 1){
            sign = -1;
        } else {
            sign = 1;
        }
    }
    return 0;
}