#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, flag = 0;
        cin >> n;
        ll d[100], a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        a[0] = d[0];
        for (int i = 1; i < n; i++)
        {
            a[i] = d[i] + a[i - 1];
            if (d[i] == 0)
            {
                continue;
            }

            else if (d[i] < d[i - 1])
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}