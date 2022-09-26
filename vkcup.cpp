#include<iostream>
using namespace std;
int main(){
    int n,k,count= 0;
    cin>>n>>k;
    int arr[n];
        
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
      for (int i = 1; i <= n; i++)
    {
        if(arr[i]==0)
        continue;
        else if((arr[i]>=arr[k]))
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}