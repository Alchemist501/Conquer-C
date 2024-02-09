#include<stdio.h>
int sum(int a,int b);
int main()
{
    
    int n,N;
    printf("Enter first number : ");
    scanf("%d",&n);
    printf("Enter second number : ");
    scanf("%d",&N);
    int ANS= sum(n,N);
    printf("Sum of numbers is %d\n",ANS);
    return 0;
}
int sum(int a,int b){
    return a+b; // will return sum to calling fn
}    