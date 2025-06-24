#include<stdio.h>
int main()
{
int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int jaduMatrix = 1;

    if (n != m) {
        jaduMatrix = 0;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == j) { // main diagonal
                    if (matrix[i][j] != 1) {
                         jaduMatrix = 0;
                        break;
                    }
                } else if (i + j == n - 1) { // secondary diagonal
                    if (matrix[i][j] != 1) {
                        jaduMatrix = 0;
                        break;
                    }
                } else {
                    if (matrix[i][j] != 0) {
                        jaduMatrix = 0;
                        break;
                    }
                }
            }
        }
    }

    if (jaduMatrix == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }


   return 0;
} 













    return 0;
}

