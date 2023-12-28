#include <iostream>
using namespace std;

int main()
{
    int input;
    int sum = 0;
    while (true)
    {
        cin >> input;
        sum += input;
        if (input == 0)
            break;
    }
    cout << sum;
    return 0;
}