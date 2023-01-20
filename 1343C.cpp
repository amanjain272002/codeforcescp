#include <iostream>
#include <algorithm>
#include <climits>
#include <set>
#define ll long long

using namespace std;

void solve(ll n)
{
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll k = 0, sum = 0;
    set<int> s;
    while (k < n)
    {
        if (s.empty())
        {
            s.insert(a[k]);
        }
        else
        {
            if ((a[k] < 0 && a[k - 1] < 0) || (a[k] > 0 && a[k - 1] > 0))
            {
                s.insert(a[k]);
            }
            else
            {
                sum += *(--s.end());
                s.clear();
                s.insert(a[k]);
            }
        }

        k++;
    }
    sum += *(--s.end());
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        solve(n);
    }

    return 0;
}