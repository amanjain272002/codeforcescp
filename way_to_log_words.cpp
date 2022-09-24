#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int l = s.length();
        if (l<= 10)
            cout << s << endl;
        else
        {
            cout << s[0];
            cout << l - 2;
            cout << s[l - 1] << endl;
        }
    }
    return 0;
}