#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long t;

    t = ((n / a) + ((n % a) != 0)) * ((m / a) + ((m % a) != 0));
    cout << t;

    return 0;
}