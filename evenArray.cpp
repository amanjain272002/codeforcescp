#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count1 = 0, count2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 != a % 2)
            {
                if (a % 2 == 1)
                    count2++;
                else
                    count1++;
            }
        }
        if(count1!=count2)
        cout<<"-1"<<endl;
        else
        cout<<count1<<endl;

    }

    return 0;
}