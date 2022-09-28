#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < 3 * n; i++)
    {
        cin >> arr[i];
    }
    int x[100], y[100], z[100], a = 0, b = 0, c = 0;
    for (int i = 0; i < 3 * n; i = i + 3)
    {
        if (a < n)
            x[a] = arr[i];
        a++;
    }
    for (int i = 0; i < 3 * n; i = i + 3)
    {
        if (b < n)
            y[b] = arr[i];
        b++;
    }
    for (int i = 0; i < 3 * n; i = i + 3)
    {
        if (c < n)
            z[c] = arr[i];
        c++;
    }

    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + x[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + y[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum3 = sum3 + z[i];
    }
    if ((sum1 == 0) && (sum2 == 0) && (sum3 == 0))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}