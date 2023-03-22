#include <iostream>
using namespace std;

void solve()
{
    int n,a,mh=0,bn=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if (a%2==0)
        {
            mh = mh + a;
        }
        else
        {
            bn = bn + a;
        }
    }
    if (bn>=mh)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    
}

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}