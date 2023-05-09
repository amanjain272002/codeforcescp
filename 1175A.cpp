#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, count = 0;
        cin >> n >> k;
        while (n != 0)
        {
            if (n % k == 0)
            {
                n = n / k;
                count++;
            }
            else
            {
                count = count + n % k;
                n = n - n % k;
            }
            
        }
        cout << count << endl;
    }

    return 0;
}