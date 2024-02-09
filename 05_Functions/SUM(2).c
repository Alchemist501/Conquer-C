#include<stdio.h>
int sum(int a);
int main(){
    int a;
    printf("Enter the last digit : ");
    scanf("%d",&a);
    printf("%d is the sum \n",sum(a));
    return 0;
}
int sum(int a){
    if (a==1)
        return 1;
    int sum_1=sum(a-1);
    int SUM=sum_1+a;
    return SUM;
    }