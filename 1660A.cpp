#include <iostream>
using namespace std;

void solve()
{
    int a, b, ans = 0;
    cin >> a >> b;
    if (b >= a)
    {
        ans = ans + 2 * a + b + b - a + 1;
        cout << ans << endl;
    }
    else
    {
        ans = ans + a + b + 1 + a - b;
        cout << ans << endl;
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