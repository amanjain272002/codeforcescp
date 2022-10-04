#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();

    int count1 = 0, flag = 0;
    int count2 = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '0')
        {
            count1 = count1 + 1;
            count2 = 0;
        }
        else if (s[i] == '1')
        {
            count2 = count2 + 1;
            count1 = 0;
        }
        if ((count1 >= 7) || (count2 >= 7))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}