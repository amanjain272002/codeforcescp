#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve()
{
    ll int n, k, i = 0, j = 0;
    cin >> n >> k;
    ll int a[n][n] = {0};
    ll int b[n][n] = {0};

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[n - i - 1][n - j - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (k < 0)
        {
            break;
        }
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                k--;
            }
        }
    }
    if (i == n && j == n && k >= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}