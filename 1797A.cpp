#include <iostream>
using namespace std;

void solve()
{
    long long int n, m, x1, x2, y1, y2;
    cin >> n >> m;
    int sum = 0, sum1 = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 < n && x1 > 1)
    {
        if (y1 > 1 && y1 < m)
        {
            sum = 4;
        }
        else if (y1 == 1 || y1 == m)
        {
            sum = 3;
        }
    }

    if (x2 < n && x2 > 1)
    {
        if (y2 > 1 && y2 < m)
        {
            sum1 = 4;
        }
        else if (y2 == 1 || y2 == m)
        {
            sum1 = 3;
        }
    }

    if (x1 == 1 || x1 == n)
    {
        if (y1 > 1 && y1 < m)
        {
            sum = 3;
        }
        else if (y1 == 1 || y1 == m)
        {
            sum = 2;
        }
    }

    if (x2 == 1 || x2 == n)
    {
        if (y2 > 1 && y2 < m)
        {
            sum1 = 3;
        }
        else if (y2 == 1 || y2 == m)
        {
            sum1 = 2;
        }
    }

    cout << min(sum, sum1) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}