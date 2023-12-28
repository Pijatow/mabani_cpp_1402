#include <iostream>
using namespace std;

int main()
{
    int i, limit;
    int yekan, dahgan, sadgan, hezar;
    bool flag;
    cin >> limit;

    for (i = 1; i < limit; i++)
    {
        flag = false;
        yekan = i % 10;
        if (yekan == 2 || yekan == 5)
        {
            dahgan = (i / 10) % 10;
            if(i< 10){
                cout << i << " ";
                continue;
            }
            if (dahgan == 2 || dahgan == 5)
            {
                sadgan = (i / 100) % 10;
                if(i< 100){
                    cout << i << " ";
                    continue;
                }
                if (sadgan == 2 || sadgan == 5)
                {
                    hezar = (i / 1000);
                    if(i< 1000){
                        cout << i << " ";
                        continue;
                    }
                    if (hezar == 2 || hezar == 5)
                    {
                        cout << i << " ";
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}