#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, sum = 0;
        cin >> n >> m;
        long long int a[n];
        long long int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b, b + m, greater<int>());
        if (n > m)
        {
            for (int i = 0; i < m; i++)
            {
                sum = sum + max(a[i], b[i]);
            }
            for (int i = m; i < n; i++)
            {
                sum = sum + a[i];
            }
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                sum = sum + max(a[i], b[i]);
            }
        }

        cout << sum << endl;
    }

    return 0;
}