#include <iostream>
using namespace std;

void solve()
{
    long int a, b;
    cin >> a >> b;

    if (a == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (b == 0)
    {
        cout << a + 1 << endl;
        return;
    }

    cout << (b * 2) + a + 1 << endl;
}

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}