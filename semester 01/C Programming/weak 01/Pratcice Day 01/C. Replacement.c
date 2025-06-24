#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr;
    scanf("%d",&arr);
      

    for(int i=0; i<=n; i++)
    {
        int arr[i];
        int positive=0;
         int negative=0;

         if(arr[i]==positive){
            printf("1\n");

         }
         else if (arr[i]==negative){
            printf("2\n");
         }

        //  printf("\n");

    }
   



    return 0;
}