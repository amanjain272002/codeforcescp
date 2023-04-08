#include <iostream>
using namespace std;

void solve()
{
    long long int n, m, x1, x2, y1, y2;
    cin >> n >> m;
    int sum = 0;
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
    else if (x1 == 1 || x1 == n)
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
    // else
    // {
    //     if (y1 > 1 && y1 < m)
    //     {
    //         sum = 3;
    //     }
    //     else if (y1 == 1 || y1 == m)
    //     {
    //         sum = 2;
    //     }
    // }
    cout << sum << endl;
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