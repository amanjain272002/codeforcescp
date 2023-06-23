#include <iostream>
#include <string>
#include <map>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    map<string, ll> mp;
    string s;
    while (n--)
    {
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    return 0;
}