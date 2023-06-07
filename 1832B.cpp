#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void maximum_sum()
{
    ll n, k, sum = 0;
    cin >> n >> k;
    ll a[100000];
    ll prf[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i <= n; i++)
    {
        prf[i] = prf[i - 1] + a[i - 1];
    }
    for (int i = 0; i <= k; i++)
    {
        sum = max(sum, prf[n - i] - prf[2 * (k - i)]);
    }
    cout << "sum = " <<sum<< endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        maximum_sum();
    }

    return 0;
}