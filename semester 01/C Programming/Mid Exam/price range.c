#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,x,y;
    scanf("%d %d %d" , &n, &x, &y);
    int count=0;
    
    for(int i=1;i<=n;i++){
      int p;
        scanf("%d ",&p);
        if(p>=x && p<=y){
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}