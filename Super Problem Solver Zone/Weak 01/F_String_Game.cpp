#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string t, p;
    cin >> t >> p;

    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1, false);
        for (int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }

        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] == p[j] && !bad[i])
            {
                j++;
                if (j == m)
                {
                    found = true;
                    break;
                }
            }
        }
        return found;
    };

    int l = 0, r = n, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
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
    return 0;
}
