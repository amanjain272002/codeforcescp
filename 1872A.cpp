#include <iostream>
#define ll long long
using namespace std;

void Two_vessels()
{
    ll a, b, c, turns = 0;
    cin >> a >> b >> c;
    if (a > b)
    {
        while (a > b)
        {
            if (a - b > c)
            {
                b += c;
                a -= c;
                turns++;
            }
            else
            {
                break;
            }
        }
        if (a - b != 0)
        {
            cout << turns + 1 << endl;
        }
        else
        {
            cout << turns << endl;
        }
    }
    else if (b > a)
    {
        while (b > a)
        {
            if (b - a > c)
            {
                b -= c;
                a += c;
                turns++;
            }
            else
            {
                break;
            }
        }
        if (b - a != 0)
        {
            cout << turns + 1 << endl;
        }
        else
        {
            cout << turns << endl;
        }
    }
    else
    {
        cout << turns << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Two_vessels();
    }
    return 0;
}