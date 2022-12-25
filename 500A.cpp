#include <iostream>
using namespace std;

int main()
{
    long int n, t;
    cin >> n >> t;
    long int a[n];
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    int i = 1, flag = 0;
    while (i <= t)
    {
        i = i + a[i];
        if (i == t)
        {
            flag = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}