#include<stdio.h>
#include<string.h>
int main()
{
     char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);
    int n = 0;
    while (s1[n] != '\0') {
        n++;
    }

    int total_operations = 0;
    for (int i = 0; i < n; i++) {
        int freq[26] = {0};
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']++;
        freq[s3[i] - 'a']++;
        
        int max_count = 0;
        for (int j = 0; j < 26; j++) {
            if (freq[j] > max_count) {
                max_count = freq[j];
            }
        }
        int min_number = 3 - max_count;
        total_operations += min_number;
       }
        printf("%d", total_operations);











    return 0;
}