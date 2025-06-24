#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll c, d;
        cin >> n >> c >> d;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());

        ll sum = 0;
        for (int i = 0; i < min((ll)n, d); i++) sum += a[i];
        if (sum >= c) {
            cout << "Infinity\n";
            continue;
        }

        if (a[0] * d < c) {
            cout << "Impossible\n";
            continue;
        }

        vector<ll> prefix(n + 1);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }

        int low = 0, high = d, ans = -1;
        while (low <= high) {
            int k = (low + high) / 2;
            ll full = d / (k + 1);
            ll rem = d % (k + 1);
            ll total = prefix[min(n, k + 1)] * full + prefix[min(n, rem)];
            if (total >= c) {
                ans = k;
                low = k + 1;
            } else {
                high = k - 1;
            }
        }
        cout << ans << '\n';
    }
}
