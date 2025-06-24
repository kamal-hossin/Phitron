#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;

        vector<int> a(n);
        int max_a = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max_a)
            {
                max_a = a[i];
            }
        }

        long long l = 1, r = max_a + x + 1, mid, ans = 1;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            long long total_water = 0;

            for (int i = 0; i < n; i++)
            {
                if (mid > a[i])
                {
                    total_water += (mid - a[i]);
                    if (total_water > x)
                    {
                        break;
                    }
                }
            }

            if (total_water <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
