#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s;
    int count = 0;
    cin>>s;
    int l = s.length();
    sort(s.begin(), s.end());
    for (int i = 1; i <= l; i++)
    {
        if (s[i-1]!=s[i])
        {
            count++;
        }
        
    }
    if(count%2==0)
    cout<<"CHAT WITH HER!" <<endl;
    else
    cout<<"IGNORE HIM!" <<endl;
    
    
    return 0;
}