#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], s3[1000];
   
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);
    
    int min, max;
    
    
    if (strcmp(s1, s2) < 0 && strcmp(s1, s3) < 0) {
        min = 1;
    } else if (strcmp(s2, s3) < 0) {
        min = 2;
    } else {
        min = 3;
    }
    
    if (strcmp(s1, s2) > 0 && strcmp(s1, s3) > 0) {
        max = 1;
    } else if (strcmp(s2, s3) > 0) {
        max = 2;
    } else {
        max = 3;
    }
    
   
     if (strcmp(s1, s2) > 0 && strcmp(s1, s3) > 0) {
        max = 1;
    } else if (strcmp(s2, s3) > 0) {
        max = 2;
    } else {
        max = 3;
    }
    
   
    if (min == 1) {
        printf("%s\n", s1);
    } else if (min == 2) {
        printf("%s\n", s2);
    } else {
        printf("%s\n", s3);
    }
    
    
    if (max == 1) {
        printf("%s\n", s1);
    } else if (max == 2) {
        printf("%s\n", s2);
    } else {
        printf("%s\n", s3);
    }
   return 0;
}
   