#include<stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    int *ptr = &num;
    int _num=*ptr;
    printf("%d is the value at pointer .\n",_num);
    printf("%p\n",&num);//prints address of num
    printf("%p\n",ptr);//prints value at ptr
    printf("%p\n",&ptr);//prints address of ptr
 // printf("%u\n",&num);
    //printf("%u\n",ptr);
    //printf("%u\n",&ptr);
    printf("%d\n",num);
    printf("%d\n",*ptr);//prints value at address in ptr
    //printf("%d\n",&ptr);
    printf("%d\n",*(&num));
    return 0;
} //codes commented here are not with error but do have some warnings.
//to avoid the yellow colour for warning we just avoid them by make them comments 