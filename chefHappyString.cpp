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
        int  count = 0,flag=0;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
            {
                if ((s[i + 1] == 'a') || (s[i + 1] == 'e') || (s[i + 1] == 'i') || (s[i + 1] == 'o') || (s[i + 1] == 'u'))
                {
                    count++;
                }
                else
                {
                    count = 0;
                }
            }
            if(count>=2){
                flag = 1;
                break;
            }
        }
        if (flag==1)
        {
            cout<<"Happy"<<endl;
        }
        else{
            cout<<"Sad"<<endl;
        }
        

    }
}