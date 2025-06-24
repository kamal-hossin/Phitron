#include<stdio.h>
void add(int a,int b)
{
    int sum=a+b;
    printf("%d\n",sum);
    return;


}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    add();


    return 0;
}