#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y, n;
    while (n--)
    {
        ll t = max(a, b);
        if (a > x && b > y)
        {
            if (t == a)
            {
                a--;
            }
            else
            {
                b--;
            }
        }
        else if (a > x)
        {
            a--;
        }
        else if (b > y)
        {
            b--;
        }
    }
    cout << a * b << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}