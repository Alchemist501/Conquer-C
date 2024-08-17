//Problem Description => https://leetcode.com/problems/minimum-size-subarray-sum/description
#include<stdio.h>
int minSubArrayLen(int target, int* nums, int numsSize) {
    int currentLength;
    int minLength = numsSize + 1;  
    int sum = 0;
    int start = 0;
    for (int end = 0; end < numsSize; end++) {
        sum += nums[end];  
        while (sum >= target) {
            currentLength = end - start + 1;
            if (currentLength < minLength) {
                minLength = currentLength;
            }
            sum -= nums[start]; 
            start++;
        }
    }
    return (minLength == numsSize + 1) ? 0 : minLength;
}
int main(){
    int target = 7;
    int nums [] = {2,3,1,2,4,3};
    printf("Minimum length sub array is %d\n",minSubArrayLen(target,nums,sizeof(nums)/sizeof(nums[0])));
    return 0;
}
