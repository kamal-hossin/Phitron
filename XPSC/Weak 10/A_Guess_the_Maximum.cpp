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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_max = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int current_max = max(a[i], a[i + 1]);
            min_max = min(min_max, current_max);
        }

        cout << (min_max - 1) << endl;
    }

    return 0;
}
