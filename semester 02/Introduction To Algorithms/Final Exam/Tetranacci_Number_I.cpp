#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
ll dp[N];

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

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
    return dp[n];
}

int main()
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << tetranacci(n) << endl;
    return 0;
}
