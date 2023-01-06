#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k,a[12],count = 0,ans = 0,check=0;
    cin>>k;
    check = k;
    for (int i = 0; i < 12; i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    for (int i = 11; i >= 0; i--)
    {
        if (k>ans)
        {
            count++;
            ans = ans + a[i];
            check = check - a[i];
        }
    }
    if (check>=1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<count<<endl;
    }
    
    
    
    return 0;
}