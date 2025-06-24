#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int ans = 0;
        long long cat_pos = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] > cat_pos)
            {
                ans++;
                cat_pos += (n - a[i]);
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
