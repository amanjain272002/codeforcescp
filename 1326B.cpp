#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long int n, b, mx = 0;
    cin >> n;
    long int arr[n] = {0};
    cin >> b;
    arr[0] = b;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        mx = max(mx, arr[i - 1]);
        arr[i] = b + mx;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}