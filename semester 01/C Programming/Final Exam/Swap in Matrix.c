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

    // 01 swap 1st column with 3rd column
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][m - 1]; // last column
        matrix[i][m - 1] = temp;
    }

    for (int j = 0; j < m; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[n - 1][j];
        matrix[n - 1][j] = temp;
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }







    return 0;
}