#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char c;
    int id;


};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i].name>>a[i].cls>>a[i].c>>a[i].id;
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        Student temp;
        temp.c = a[i].c;
        a[i].c = a[j].c;
        a[j].c = temp.c;
    }
    for(int i=0;i<n;i++)
    {
        cout <<a[i].name<<" "<<a[i].cls<<" "<<a[i].c<<" "<<a[i].id<<endl;
    } 
    

    return 0;
}