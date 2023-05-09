#include <iostream>
using namespace std;

void solve()
{
    long long int n, k, b, s;
    cin >> n >> k >> b >> s;
    if (s == 0 && b == 0)
    {
        cout << "0" << endl;
    }
    else if (k * b <= s)
    {
        cout << b * k << " ";
        cout << s - b * k << " ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}