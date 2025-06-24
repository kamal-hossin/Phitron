#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        long long result=1;
        for(int j=1;j<=n;j++)
        {
         result *=j;

        }
         printf("%lld",result);
    }
     





    return 0;
}