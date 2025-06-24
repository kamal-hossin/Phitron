#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tetranacci(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (n == 3)
    {
        return 2;
    }

    vector<ll> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (ll i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }

    return dp[n];
}

int main()
{
    ll n;
    cin >> n;
    cout << tetranacci(n) << endl;
    return 0;
}