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
            int x = a[i - 1] + d[i];
            int y = a[i - 1] - d[i];
            if ((x >= 0 && y >= 0) && (x != y))
            {
                flag = 1;
                break;
            }
            else
            {
                if (x > 0)
                {
                    a[i] = x;
                }
                else
                {
                    a[i] = y;
                }
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