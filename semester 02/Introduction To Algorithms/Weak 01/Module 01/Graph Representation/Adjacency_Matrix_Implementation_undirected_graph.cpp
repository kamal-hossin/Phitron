#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];
     memset(adj_mat, 0, sizeof(adj_mat));     // loop er short cut


    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            adj_mat[i][j]=1;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;      // undirected graph er jonno ei line hoise
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;

    }

        return 0;
    }