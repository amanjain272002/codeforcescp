#include <iostream>

using namespace std;
int main()
{
    int x, flag = 0, count = 1;
    cin >> x;
    while (x / 2 != 0)
    {
        if (x%2==1)
        {
            count++;
        }
        
        x = x / 2;
    }

    cout << count << endl;

    return 0;
}