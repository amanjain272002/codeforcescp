#include <iostream>
#include <algorithm>
#include <cmath>
#define lg long long
using namespace std;

int checkPrime(lg int l)
{
    int chk = 0;
    for (int i = 3; i <= l / 2; i+=2)
    {
        if (l % i == 0)
        {
            chk++;
            break;
        }
    }
    return chk;
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
        else if (a % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (a > 8)
        {
            double l = sqrt(a);
            if (l != int(l))
            {
                cout << "NO" << endl;
            }
            else
            {
                if (checkPrime(l))
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
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