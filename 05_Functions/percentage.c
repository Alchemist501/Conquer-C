#include<stdio.h>
float percentage(float value);
int main(){
    float value;
    printf("Enter the marks : ");
    scanf("%f",&value);
    printf("%f is the percentage\n",percentage(value));
    return 0;
}
float percentage(float value){
    float total;
    printf("Enter the total marks : ");
    scanf("%f",&total);
    float dec= (total/100.00);
    float percent=((value/total)*100.00);
    return percent;
}