#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string p = s;
    reverse(p.begin(), p.end());
    if(s == p) {
        cout << "YES" << endl;
    } else {
        cout << "NO\n";
    }
    return 0;
}