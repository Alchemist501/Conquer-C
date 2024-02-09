#include<stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    int *ptr = &num;
    printf("the number is : %d\n",num);
    printf("The *ptr = %d\n",*ptr);
    int**pptr =&ptr;//stores the address of ptr
    printf("the address of number is : %d\n",&ptr);
    printf("The address of ptr is %d\n",&pptr);
    printf("The number from its pointer to pointer is %d\n",**pptr);
    return 0;
} //codes commented here are not with error but do have some warnings.
//to avoid t