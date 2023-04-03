#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

void stringLcm()
{
    string s, t;
    cin >> s >> t;
    string f = "", k = "";
    int l1 = s.length();
    int l2 = t.length();
    int lcm = (l1 * l2) / gcd(l1, l2);

    for (int i = 0; i < lcm / l1;)
    {
        f = f + s;
        i++;
    }

    for (int i = 0; i < lcm / l2;)
    {
        k = k + t;
        i++;
    }

    if (f == k)
    {
        cout << f << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        stringLcm();
    }

    return 0;
}