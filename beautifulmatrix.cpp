#include <iostream>
using namespace std;
int main()
{
    long long arr[5][5], t;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == j) && ((i == 0&&j==0) || (i == 4&&j==4))&&(arr[i][j] == 1))
                t = 4;
            else if (arr[i][j] == 1)
            {
                t = abs(i - 2) + abs(j-2);
            }
        }
    }
    cout << t << endl;

    return 0;
}