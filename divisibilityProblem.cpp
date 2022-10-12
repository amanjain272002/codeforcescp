#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;

        if (x % y == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            int w = x % y;

            cout << y - w << endl;
        }
    }

    return 0;
}