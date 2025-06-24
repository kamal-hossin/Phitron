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
        long long n, k;
        cin >> n >> k;
        long long total = (n * (2 * k + n - 1)) / 2;
        long long left = 1, right = n;
        long long ans = LLONG_MAX;
        while (left <= right)
        {
            long long mid = (left + right) / 2;
            long long leftSum = (mid * (2 * k + mid - 1)) / 2;
            long long x = abs((2 * leftSum) - total);
            ans = min(ans, x);
            if ((2 * leftSum) < total)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
