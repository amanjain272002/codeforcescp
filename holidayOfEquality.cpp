#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[100],mx = -1,n,sum =0 ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mx = max(a[i],mx);
    }
     for (int i = 0; i < n; i++)
    {
        sum = sum+(mx-a[i]);
    }
    cout<<sum<<endl;

    
    return 0;
}