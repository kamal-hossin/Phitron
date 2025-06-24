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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long sum = 0;
        int max_val = 0;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i];
            max_val = max(max_val, a[i]);
            if (sum == max_val)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
