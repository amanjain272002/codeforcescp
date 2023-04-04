#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, a, mx = 0, p = 0, p1 = 0;
        cin >> l >> r >> a;

        long long int y = r;
        if (l == r)
        {
            cout << floor(l / a) + l % a << endl;
        }

        else
        {
            if ((r % a) != (a - 1))
            {
                y = (r / a) * a - 1;
                if (y < l)
                {
                    y = r;
                }
            }
            cout << (y / a) + y % a << endl;

           
        }
    }

    return 0;
}