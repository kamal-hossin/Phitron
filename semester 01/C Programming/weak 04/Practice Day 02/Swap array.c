#include<stdio.h>
#include<stdlib.h>

int main()
{  // variable swap & arry swap
    int a,b;
    scanf("%d %d",&a,&b);

    int temp=a;
    a=b;
    b=temp;

    int x[10],y[10];

    for(int i=0 ; i<10; i++)
    {
        scanf("%d %d" ,& x[i], &y[i]);

    }
    for(int i=0; i<10; i++)
    {
        int temp1=x[i];
        x[i]=y[i];
        y[i]=temp1;


    }
    for(int i=0 ; i<10; i++)
    {
        printf(" %d %d " , x[i], y[i]);

    }
    
    





    return 0;
}