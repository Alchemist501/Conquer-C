// Problem description : https://leetcode.com/problems/reverse-words-in-a-string/description
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverseWords(char* s) {
    int len = strlen(s);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    result[0] = '\0';
    int i = len - 1;
    while (i >= 0) {
        while (i >= 0 && s[i] == ' ') i--;
        if (i < 0) break;
        int end = i;
        while (i >= 0 && s[i] != ' ') i--;
        int start = i + 1;
        char word[50];
        strncpy(word, s + start, end - start + 1);
        word[end - start + 1] = '\0';
        if (result[0] != '\0') strcat(result, " ");
        strcat(result, word);
    }
    return result;
}
int main(){
    printf("%s\n",("the sky is blue"));
    return 0;
}