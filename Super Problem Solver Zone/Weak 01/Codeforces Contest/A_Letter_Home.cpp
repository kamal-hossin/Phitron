#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min_pos = *min_element(a.begin(), a.end());
        int max_pos = *max_element(a.begin(), a.end());
        int ans = max(max_pos, s) - min(min_pos, s);
        cout << ans << endl;
    }

    return 0;
}


