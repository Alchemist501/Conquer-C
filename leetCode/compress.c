//Problem Description => https://leetcode.com/problems/string-compression/description
#include<stdio.h>
void erase(char* arr, int* size, int index) {
    if (index < 0 || index >= *size)  return;
    for (int i = index; i < *size - 1; i++) 
        arr[i] = arr[i + 1];
    (*size)--;
}
int compress(char* chars, int charsSize) {
    int count = 1;
    int idx = 0;
    int originalSize = charsSize;
    for (int i = 1; i <= charsSize; i++) {
        if (i == charsSize || chars[i] != chars[i - 1]) {
            chars[idx++] = chars[i - 1];
            if (count > 1) {
                char countStr[12];
                sprintf(countStr, "%d", count);
                for (int j = 0; countStr[j] != '\0'; j++) 
                    chars[idx++] = countStr[j];
            }
            count = 1; 
        } else count++;
    }
    while (idx < originalSize) 
        erase(chars, &originalSize, idx);
    return idx;
}
int main(){
    char chars[] = {'a','a','b','b','c','c','c','\0'};
    int index = compress(chars,7);
    for(int i = 0; i < index; i++)
        printf("%c",chars[i]);
    printf("\n");
}