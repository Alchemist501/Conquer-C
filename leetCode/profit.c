// Problem Description => https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description
#include<stdio.h>
int maxProfit(int* prices, int pricesSize) {
    int small = prices[0];
    int large = 0;
    for(int i = 0; i< pricesSize; i++){
        if(small - prices[i] > 0)
            small = prices[i];
        if(prices[i] - small > large){
            large = prices[i] - small;
        }
    }
    return  large;
}
int main(){
    int prices[] = {7,1,5,3,6,4};
    int pricesSize = 6;
    printf("Maximum possible profit is : %d\n",maxProfit(prices,pricesSize));
    return 0;
}