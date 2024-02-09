#include<stdio.h>
int square(int n);
int square_(int *n);
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("%d is the number \n",num);
    //int*n=&num;
    //square(num);  
    square_(&num);
    printf("%d is the number after call by reference \n",num);
    return 0;
}
//call by value 
int square(int n){
    printf("%d is the square of %d\n",n*n,n);
    return 0;
}
//call by reference
int square_(int *n){
    *n=(*n)*(*n);
    printf("%d is the square\n",(*n));
    return 0;
}