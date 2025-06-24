#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int Even=0;
    int Odd=0;
    int positive=0;
    int Negative=0;
    for(int i=0;i<=a;i++){
        if(i%2==0){
            printf("Even:%d\n",i);
        }
         else if{
            printf("Odd:%d\n",i);

        }
        if(i>0){
            printf("Positive\n");

        }
        else if(i<0){
            printf("Negative\n");
        }

        
    }
  




    return 0;
}