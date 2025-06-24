#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=10;
    int *p=&x;


    // x++;
    printf("%d\n ",x);

    printf("%d\n",*p);
    
    *p=100;

    printf("%d\n ",x);
    printf("%d",*p);



  return 0;

}