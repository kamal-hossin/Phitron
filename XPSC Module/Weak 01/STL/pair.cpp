#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // pair<string, int> student = {"rahim", 10};
    // // cout << student.first << " " << student.second << endl;
    // // auto [name, roll] = student;
    // // cout << name << " " << roll << endl;
    int n;
    cin >> n;
    pair<string,int>student[n];
    for(int i=0;i<n;i++)
    {
        cin >> student[i].first >> student[i].second;
    }
    for(auto[x,y]:student)
    {
        cout << x << " " << y << endl;
    }



    return 0;
}