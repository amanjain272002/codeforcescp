#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        sum = n;
        while (n)
        {
            sum += n / 2;
            n = n / 2;
        }
        cout << sum << endl;
    }

    return 0;
}