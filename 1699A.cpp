#include<iostream>
using namespace std;

void solve(){
    long int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<n/2<<" "<<0 <<" "<<0<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    
}

int main(){
    long int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}