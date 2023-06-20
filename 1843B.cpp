#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, negsave = 0, currneg = 0;
        cin >> n;
        ll a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += abs(a);
            if (a == 0)
            {
                continue;
            }

            else if (a < 0 && currneg == 0)
            {
                currneg++;
            }
            else if (a > 0)
            {
                negsave += currneg;
                currneg = 0;
            }
        }
        if (currneg != 0)
        {
            negsave += currneg;
            currneg = 0;
        }

        cout << sum << " " << negsave << endl;
    }

    return 0;
}