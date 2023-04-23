#include <iostream>
#include <algorithm>
#include <cmath>
#define lg long long
#define limit 1000000
using namespace std;

lg prime_flag[limit];
void checkPrime()
{
    prime_flag[0] = prime_flag[1] = 1;
    lg i, j;
    for (i = 2; i < limit; i++)
    {
        if (prime_flag[i] == 0)
        {
            for (j = i * i; j < limit; j += i)
            {
                if (prime_flag[j] == 0)
                {
                    prime_flag[j] = 1;
                }
            }
        }
    }
}

int sqrtRoot(lg a)
{
    double d = sqrtl(a);
    if (d == int(d))
    {
        return 1;
    }
    else
    {
        return 0;
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
        else if (a % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if ((prime_flag[int(sqrt(a))] == 0) && sqrtRoot(a) == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    checkPrime();
    lg int n;
    cin >> n;
    solve(n);
    return 0;
}