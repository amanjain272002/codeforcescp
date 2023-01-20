#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a;
        cin>>a;
        if (a & 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool b = false;
            ll div = a, k;
            while (div > 2)
            {
                div = div / 2;
                k = div;
                if (div & 1)
                {
                    div = k;
                    if (a % div == 0)
                    {
                        b = true;
                        break;
                    }
                }
            }
            if (b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}