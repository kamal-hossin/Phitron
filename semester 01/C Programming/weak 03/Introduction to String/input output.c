#include<stdio.h>
int main(){
{
    char str[10]="abcd";                //string declear
    
     //scanf("%s",str);                //input         
    
    //scanf("%[^\n]s",str);            //input + arry line boro nite use kora hoi
     
     
    fgets(str,sizeof(str),stdin);     //input
      
      //puts(str);                     //output
      
      fputs(str,stdout);               //string output pint 
       
       
       //printf("%s",str);            //output

   // for(int i=0; i < 4; i++){       //input
         
        //printf("%s",str);           //dircet print

    }//



    return 0;
}