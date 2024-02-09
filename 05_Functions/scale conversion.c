#include<stdio.h>
float scale(float n);
int main(){
    float scal;
    scanf("%f",&scal);
    printf("%f\n",scale(scal));
    return 0;
}
float scale(float n){
    int val=((9*n)/5)+32;
    return val;
}