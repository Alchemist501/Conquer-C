#include<stdio.h>
int fibannocci(int n);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    fibannocci(num);
    //printf("%d is \n",fibannocci(num));
    return 0;
}
int fibannocci(int n){
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    int fib=fibannocci(n-1)+fibannocci(n-2);
    printf("%d\n",fib);
    return fib;
}