#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int) * 1);
    int size = 0;
    int index = 0; 
    int length = 1; 

    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        
        if (size == length) {
            length++;
            arr = (int *)realloc(arr, sizeof(int) * length);
        }

        
        arr[index] = num;
        index++;
        size++;
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    
    
    free(arr);

    return 0;
}
