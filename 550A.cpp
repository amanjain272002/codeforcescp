#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, r;
    int s1 = 0, s2 = 0;
    cin >> s;
    for (int i = 0; i < s.length() - 1;)
    {
        r = s.substr(i, 2);
        if (r == "AB" && s1 == 0)
        {
            s1 = 1;
            i = i + 2;
        }
        else if (r == "BA" && s2 == 0)
        {
            s2 = 1;
            i = i + 2;
        }
        else if (s1 == 1 && s2 == 1)
        {
            break;
        }
        else
        {
            i = i + 1;
        }
    }
    if (s1 == 1 && s2 == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}