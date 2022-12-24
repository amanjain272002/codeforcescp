#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int l, val, k = 0;
        cin >> s;
        val = stoi(s);
        val = val % 10; // calculate last digit
        l = s.length();
        if (val != 1)
        {
            k = 10 * (val - 1);
            for (int i = 1; i <= l; i++)
            {
                k = k + i;
            }
        }
        else
        {
            for (int i = 1; i <= l; i++)
            {
                k = k + i;
            }
        }
        cout << k << endl;
    }

    return 0;
}