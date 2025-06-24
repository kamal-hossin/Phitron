#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int rounds = 1;
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            rounds++;
        }
    }

    cout << rounds << endl;

    return 0;
}
