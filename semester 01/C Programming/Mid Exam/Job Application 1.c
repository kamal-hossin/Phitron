#include<stdio.h>
int main()
{
    int n;
    scanf("%d ", &n);

    if(n>0 && n<=1){


        printf("Junior candidate\n");

    } 
    else if(n>1 && n<=3){

        printf("Junior candidate\n");
    }
    else if(n>3 && n<=7){
        printf("Mid-level candidate\n");
    }
    else {
        printf("Senior candidate\n");
    }





    return 0;
}