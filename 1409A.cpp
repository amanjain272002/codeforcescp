#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, count = 0, div = 0, rem = 0;
        cin >> a >> b;
        div = abs(a - b);

        rem = div % 10;

        div = div / 10;

        if (rem > 0 && rem < 10)
        {
            cout << div + 1 << endl;
        }
        else
        {
            cout << div << endl;
        }
    }
}