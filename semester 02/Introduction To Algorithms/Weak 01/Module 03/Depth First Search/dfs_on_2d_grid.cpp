#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
      return false;

      else
         true;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj;
    vis[si][sj] = true;

    for (int i=0; i<4; i++)
    {
        int ci,cj;
        ci=si+d[i].first;
        cj=si+d[i].second;
        
        if(valid(ci,cj)==true && vis[si][sj]==false)
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
   
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis,false,sizeof(vis));
    dfs(si, sj);

    return 0;
}