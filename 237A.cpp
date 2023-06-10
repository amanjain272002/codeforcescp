#include <iostream>
#include <utility>
#include <algorithm>
#include<cmath>
#include<map>
#define ll long long int
using namespace std;

int main()
{
    ll n; 
    int h, m, ans = 1;
    cin >> n;
    map<pair<int,int>,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>h>>m;
        mp[make_pair(h,m)]++;
    }
    for (auto i = mp.begin(); i!= mp.end(); i++)
    {
        ans = max(ans,i->second);
    }
    cout<<ans<<endl;
    return 0;
}