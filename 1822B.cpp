#include <iostream>
#include <algorithm>
#define lg long long
using namespace std;

void Karina_Array()
{
    lg int n;
    cin >> n;
    lg int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << max(a[0] * a[1], a[n - 2] * a[n - 1]) << endl;
}

int main()
{
    lg int t;
    cin >> t;
    while (t--)
    {
        Karina_Array();
    }
    return 0;
}