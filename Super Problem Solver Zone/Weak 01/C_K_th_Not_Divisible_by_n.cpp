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

        long long l = 1, r = 2e18, mid, ans;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (mid - (mid / n) < k)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
