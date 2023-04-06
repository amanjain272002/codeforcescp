#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,d,k=-1;
        cin>>n>>d;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if ((d+'0') > s[i])
            {
                k = i;
                break;
            }
        }
        if (k == -1)
        {
            cout<<s<<d<<endl;
        }
        else
        {
            s.insert(k,to_string(d));
            cout<<s<<endl;
        }
        
    }
    
    return 0;
}