#include <iostream>
using namespace std;

int main()
{
    int i;
    int n = 10;
    float input, avg, sum;
    sum = 0;

    for (i = 0; i < n; i++)
    {
        cin >> input;
        sum += input;
    }
    avg = sum / n;
    cout << sum << endl;
    cout << avg;
    return 0;
}