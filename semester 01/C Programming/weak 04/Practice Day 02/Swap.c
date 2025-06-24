#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x , y;
    scanf("%d %d", &x , &y);

    int* p1=&x;

    int* p2=&y;

    int temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("%d %d ", x, y);





    return 0;
}