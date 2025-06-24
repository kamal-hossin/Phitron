#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    getline(cin ,s);
    cin >> t;
    
    stringstream ss(s);
    string word;
    // ss >> word;
    // cout << word;
    int count=0;
    while(ss >> word)
    {
        if(t==word)
        {
            count++;
        }

    }
    cout << count << endl;
    


      
    return 0;
}