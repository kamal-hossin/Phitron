#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    v.insert(v.begin() + 2, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }

    return 0;
}