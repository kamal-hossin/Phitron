#include<stdio.h>
int main()
{
    long long a,b ,k;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%k==0 && b%k==0){
        printf("Both\n");
    }
    else if(a%k==0){
        printf("Memo\n");
    }
    else if(b%k==0){
        printf("Momo\n");
    }
    else{

        printf("No One\n");
    }




    return 0;

}