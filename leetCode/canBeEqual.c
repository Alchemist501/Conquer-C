//Problem Description => https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description
#include<stdio.h>
#include<stdbool.h>
int i = 0;
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int arrIndex[1001] = {0};
    int targetIndex[1001] = {0};
    for(i = 0; i < targetSize; i++){
        arrIndex[arr[i]]++;
        targetIndex[target[i]]++;
    }
    for(i = 0; i < 1001; i++){
        if(arrIndex[i] != targetIndex[i]) return false;
    }
    return true;
}
int main(){
    int target [] = {1,2,3,4};
    int arr [] = {2,4,1,3};
    if(canBeEqual(target,sizeof(target)/sizeof(target[0]),arr,sizeof(arr)/sizeof(arr[0])))
        printf("They are equal\n");
    else 
        printf("They are not equal\n");
    return 0;
}