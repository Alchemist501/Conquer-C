#include<stdio.h>
int factorial(int a);
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("%d is the factorial \n",factorial(a));
    return 0;
}
int factorial(int a){
    if (a==0)
        return 1;
    int fact_1=factorial(a-1);
    int fact=fact_1*a;
    return fact;
    }
    /*
    1==>1 //1
    2==>1*2==>2 //(n-4)*(n-3)
    3==>1*2*3==>6 //
    4==>1*2*3*4==>24
    5==>1*2*3*4*5==>120 //(n)*/