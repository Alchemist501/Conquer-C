#include<stdio.h>
int main()
{
    int age;
    printf("ENTER THE AGE : ");
    scanf("%d",&age);
    if (age>=18)
       printf("ADULT HEI...\n");
    else if (age<=13&&age>18)
    printf("teenager");
    else
    printf("CHILD\n");
    return 0;
}