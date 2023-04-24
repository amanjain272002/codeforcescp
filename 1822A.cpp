#include <iostream>
#include <algorithm>
using namespace std;

void tube_tube()
{
    int videos, duration, mn = 0, index = 0, mx = 0, k = 0, l = 0;
    cin >> videos >> duration;
    int a[51] = {0};
    int b[51] = {0};
    for (int i = 0; i < videos; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < videos; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < videos; i++)
    {
        if (a[i] + l <= duration)
        {
            if (b[i] >= mn)
            {

                mn = b[i];
                index = i;
                mx = a[i];
            }
            else if (a[i] == mx)
            {
                if (b[i] > mn)
                {

                    mn = b[i];
                    index = i;
                }
            }
        }
        else
        {
            k++;
        }
        l++;
    }
    if (k == videos)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << index + 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tube_tube();
    }
    return 0;
}