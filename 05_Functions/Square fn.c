#include<stdio.h>
#include<math.h>
int main(){
    float num;
    printf("Enter a number\n");
    scanf("%f",&num);
    printf("%f",num);
    printf("The square is %f\n",pow(num,2));
    return 0;
}