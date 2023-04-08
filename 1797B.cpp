#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        string ans = "YES";
        long long int arr[n][n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if ((arr[i][j] != arr[n - i - 1][n - j - 1]) && k > 0)
                {
                    k--;
                    ans = "YES";
                }
                else if ((arr[i][j] != arr[n - i - 1][n - j - 1]) && k <= 0)
                {
                    ans = "NO";
                    break;
                }
            }
            if (k < 0)
            {
                break;
            }
        }
        cout << ans << endl;
    }
}