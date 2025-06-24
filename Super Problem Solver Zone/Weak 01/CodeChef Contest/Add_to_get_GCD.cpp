#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (__gcd(x, y) > 1)
        {
            cout << 0 << endl;
        }
        else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
