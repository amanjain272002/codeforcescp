#include <iostream>
using namespace std;

void balancedArray()
{
    long long int n, sumeven = 0, sumodd = 0, sum = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        sumeven = sumeven + 2 * i;
    }

    for (int i = 0; i < n / 2 - 1; i++)
    {
        sumodd = sumodd + 2 * i + 1;
    }

    sum = sumeven - sumodd;
    if (sum % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 * i << " ";
        }
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2 * i + 1 << " ";
        }
        cout << sum << endl;
    }
}

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        balancedArray();
    }

    return 0;
}