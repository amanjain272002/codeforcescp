#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else if (s[i] == ')' && count > 0)
            {
                count--;
            }
        }
        cout << count << endl;
    }
    return 0;
}