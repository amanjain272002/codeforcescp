#include <iostream>
#include <string>

using namespace std;

int main()
{
    int check = 0;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}