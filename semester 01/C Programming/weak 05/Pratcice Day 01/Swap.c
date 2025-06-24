#include<stdio.h>

int swap(int x,int y)
{
    // int x,y;
    // scanf("%d %d",&x,&y);
    
    // int temp=0;
    int temp=x,
    x=y;
    y=temp;
    printf("%d",temp);
    return;




}





int main()
{
    // int x,y;
    // scanf("%d %d",&x,&y);
    
    swap();
    // printf("%d",swap);
    
    return 0;
}