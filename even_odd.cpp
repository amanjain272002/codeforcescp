#include <iostream>
using namespace std;

int main()
{
    long long n, k, j = 1;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            for (int i = 0; i < k; i++)
            {
                if (i + 1 == k)
                {
                    cout << 2 * i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = n / 2 + 1; i <= n; i++)
            {
                if (i == k)
                {
                    cout << 2 * j << endl;
                    break;
                }
                j = j + 1;
            }
        }
    }

    else
    {
        if (k <= (n + 1) / 2)
        {
            for (int i = 0; i < k; i++)
            {
                if (i + 1 == k)
                {
                    cout << 2 * i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = (n + 3) / 2; i <= n; i++)
            {
                if (i == k)
                {
                    cout << 2 * j << endl;
                    break;
                }
                j = j + 1;
            }
        }
    }

    return 0;
}