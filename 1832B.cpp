#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void maximum_sum()
{
    ll n, k, sum = 0;
    cin >> n >> k;
    ll a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    ll ini = 0, fin = n - 1;
    ll mx=0,sum1=sum,sum2=sum;
    while (k--)
    {
        sum1 = sum1 - (a[ini] + a[ini+1]);
        sum2 = sum2 - a[fin];
        mx = max(sum1,sum2);
        if(mx == sum1){
            fin = fin-1;
            sum2 = sum1;
            sum = sum1;
        }
        else
        {
            ini = ini+2;
            sum1 = sum2;
            sum = sum2;
        }
        k--;
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        maximum_sum();
    }

    return 0;
}