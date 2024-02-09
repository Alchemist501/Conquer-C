#include<stdio.h>
int main(){
    int x;
    int *ptr=&x;
    int **pptr=&ptr;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("The value of x is %d\n", **(pptr));
    return 0;
}