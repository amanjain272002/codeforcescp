#include <iostream>
#include <algorithm>
using namespace std;

void LongLegs()
{
    long long a, b, sum = 0, m = 1;
    cin >> a >> b;
    if (a % 2 != 0)
    {
        sum = sum + 1;
        a = a - 1;
    }
    if (b % 2 != 0)
    {
        sum = sum + 1;
        b = b - 1;
    }
    if (a != 0 && b != 0)
    {
        if (max(a, b) % min(a, b) != 0)
        {
            sum++;
            sum = sum + a / 2 + b / 2;
        }
        else
        {
            sum = sum + min(a, b);
            sum = sum + max(a, b) / min(a, b);
        }
    }
    if (a == 0 && b != 0)
    {
        sum++;
        sum = sum + b / 2;
    }
    if (a != 0 && b == 0)
    {
        sum++;
        sum = sum + a / 2;
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LongLegs();
    }
}