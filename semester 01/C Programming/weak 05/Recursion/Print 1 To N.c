#include<stdio.h>

void fun(int x,int n)
{
    if(x>n)
    {
        return;

    }
    printf("%d\n",x);
    fun(x+1,n);



}



int main()
{
    int x,n;
    scanf("%d\n %d",&x,&n);

    fun(x , n);


    return 0;
}