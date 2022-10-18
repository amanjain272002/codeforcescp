#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char a[100];
    string s;
    cin >> s;
    int j = 0;
    
    if (s.length() > 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {  
                a[j] = s[i];
                j++;
            }
        }
        sort(a, a + j);

        for (int i = 0; i < j; i++)
        {
            if(i==0){
                cout<<a[i]<<"+";
            }
            else if(i==j-1){
                cout<<a[i]<<endl;
            }
            else{
                cout<<a[i]<<"+";
            }
        }
        
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}