#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a,b;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("enter a number : ");
    scanf("%d",&b);
    //printf("%d is a and %d is b\n",a,b);
    swap(&a,&b);
    return 0;

}//Call by reference
void swap(int *a, int *b){
    int t;
    t= (*b);
    *b=*a;
    *a=t;
    printf("%d is a and %d is b\n",(*a),(*b));
}