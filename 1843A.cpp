#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[51];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (int i = 0; i < n / 2; i++)
        {
            sum += arr[n - i - 1] - arr[i];
        }

        cout <<  sum << endl;
    }

    return 0;
}