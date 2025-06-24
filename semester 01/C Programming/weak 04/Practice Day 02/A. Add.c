#include<stdio.h>
int main()
{
    int x,y;
     scanf("%d %d", &x,&y);
    int *p1=&x;
    
    int *p2=&y;

    int sum=0;
    sum=*p1 + *p2;
    
    printf("%d",sum);



    return 0;
}