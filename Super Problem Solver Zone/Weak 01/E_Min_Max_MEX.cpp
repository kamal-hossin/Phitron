#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[a[i]]++;
        }
        int low = 0;
        int high = n;
        int ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            bool ok = true;
            int min_count = INT_MAX;
            for (int i = 0; i < mid; ++i) {
                if (freq.count(i) == 0) {
                    ok = false;
                    break;
                }
                min_count = min(min_count, freq[i]);
            }
            if (ok && min_count >= k) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    
    return 0;
}
