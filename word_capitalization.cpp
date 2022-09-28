#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int d;
    cin>>s;
    // cout<<int(s)<<endl;
    // char c= s[0];
    if(int(s[0])>=97){
        d = int(s[0])-32;
        cout<<char(d);
        for (int i = 1; i < s.length(); i++)
        {
            cout<<s[i];
        }
    }
    else{
        for (int i = 0; i < s.length(); i++)
        {
            cout<<s[i];
        }
    }
    return 0;
}