#include<stdio.h>

void fun(int x,int n)
{
    if(x>n)
    {
        return;
    }

    fun(x+1 , n);
    printf("%d\n",x);
}




int main()
{
    int x,n;
    scanf("%d %d",&x , &n);
    fun(x,n);
    return 0;
}