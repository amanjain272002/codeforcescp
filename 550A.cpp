#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int p = 0, q = 0, r = 0, t = 0, ind = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            ind = i;
            p = 1;
            break;
        }
    }
    if (p == 1)
    {
        for (int i = ind + 2; i < s.length() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                q = 1;
                break;
            }
        }
    }
    if (q == 0)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                ind = i;
                r = 1;
                break;
            }
        }

        if (r == 1)
        {
            for (int i = ind + 2; i < s.length() - 1; i++)
            {
                if (s[i] == 'A' && s[i + 1] == 'B')
                {
                    ind = i;
                    t = 1;
                    break;
                }
            }
        }
    }

    if ((p == 1 && q == 1) || (r == 1 && t == 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}