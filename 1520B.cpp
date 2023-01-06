#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long int n, count = 0, start = 0;
        cin >> n;
        for (int i = 1; i < 10; i++)
        {
            start = i;
            while (start <= n)
            {
                count++;
                start = 10 * start + i;
            }
        }
        cout << count << endl;
    }

    return 0;
}