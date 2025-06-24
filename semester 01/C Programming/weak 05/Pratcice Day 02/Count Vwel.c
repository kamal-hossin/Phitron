#include<stdio.h>
#include<string.h>

int count_vowel(char s[],int index){
    if([index]=='\0'){
        return;
    }
    if(is_vowel(s[index])){
        return 1+ count_vwoel(s,index+1);
    }
    else{
        return 0+ count_vowel(s,index+1);
    }
}






int main(){
 char s[201];
 fgets(s,sizeof(s),stdin);
 int ans=count_vowel(s,0);
 printf("%d",ans);



}