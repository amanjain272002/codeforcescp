#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,str;
    char c;
    str = "";
    int flag = 0,j=0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if ((int(s[i]) >= 65 && (int(s[i]) <= 90))||(int(s[j]) >= 97 && (int(s[j]) <= 122)))
        {
            flag = 1;
            j = j-1;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag==1){
        str = (char)toupper(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            c = (char)tolower(s[i]);
            str = str + c;
        }
        cout<<str;
    }
    else{
        cout<<s;
    }

    return 0;
}