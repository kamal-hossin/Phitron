#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
   for(int i=0; i<t; i++){
    int x,y;
    scanf("%d %d",&x , &y);
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
    int sum=0;
    for(int j=x+1;j<y;j++){
        if(j%2 !=0){
            sum+=1;
        }
        printf("%d",sum);

    }
   }
    
   return 0; 
}