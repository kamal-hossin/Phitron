#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // tuple<string,int,int>t=make_tuple{"rahim",10,01723};
    tuple<string,int,int>t={"rahim",10,01723};
    // cout <<get<0>(t)<<" " <<get<1>(t)<<" " <<get<2>(t)<<endl;
    auto [name,roll,phone]=t;
    cout << name <<" "<< roll << " " << phone <<endl;

    return 0;
}