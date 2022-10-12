#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin>>n;
        if(n<=2){
            cout<<"0"<<endl;
        }
        else{
            if(floor(n%2)!=0){
                cout<<n/2<<endl;
            }
            else{
                cout<<n/2-1<<endl;
            }
        }
        
    }
    
    return 0;
}