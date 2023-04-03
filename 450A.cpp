#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int n,m,mx=0,index_save = 0;
    double a;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if (ceil(a/m)>=mx)
        {
            index_save = i;
            mx = ceil(a/m);
        }
    }
    cout<<index_save+1<<endl;
}

int main(){
    solve();
    return 0;
}