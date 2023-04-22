#include <iostream>
#include <algorithm>
#include <cmath>
#define lg long long
using namespace std;

void checkPrime(lg int l, lg int a)
{
    int chk = 0;
    for (int i = 2; i < l; i++)
    {
        if (a % i == 0)
        {
            chk++;
            break;
        }
    }
    if (chk == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
void solve(lg int n)
{
    lg int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int k = 0;
        if (a == 4)
        {
            cout << "YES" << endl;
        }
        else if (a > 8)
        {
            lg int l = sqrtl(a);
            checkPrime(l, a);
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    lg int n;
    cin >> n;
    solve(n);
    return 0;
}