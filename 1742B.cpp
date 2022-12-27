#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x;
        cin >> n;
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        if (s.size() == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}