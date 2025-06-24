#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a, &c, &b);
    if(c=='>'){
        if(a>b){
            printf("Right\n");

        }
        else{
            printf("Worng\n");
        }
    }
    else if(c=='<'){
        if(a<b){
           printf("Right\n");
        }
        else{
             printf("Worng\n");
        }
    }
    else{
        if(a==b){
           printf("Right\n");  
        }
        else{
             printf("Worng\n");
        }
    }





    return 0;
}