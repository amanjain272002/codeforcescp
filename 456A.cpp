#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(int n)
{
    vector<pair<int, int>> m;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        m.push_back(make_pair(a, b));
    }
    sort(m.begin(), m.end());
    for (int i = 1; i < n; i++)
    {
        if (m[i - 1].second > m[i].second)
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
}

int main()
{
    long long int n, flag = 0;
    cin >> n;
    solve(n);

    return 0;
}