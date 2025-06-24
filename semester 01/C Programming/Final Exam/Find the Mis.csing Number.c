#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i< t;i++){
    long long int m;
    scanf("%lld",&m);
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int res=a*b*c;
     long long int d=m/res;

     if(m % res==0){
        printf("%lld\n",d);
     } else{
        printf("-1\n");

     }


    }




    return 0;
}