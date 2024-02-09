#include<stdio.h>
int main()
{
    int marks;
    printf("ENTER THE MARKS : ");
    scanf("%d",&marks);
    if(marks<30&&marks>=0)
        printf("the grade is C\n");
else if (30<=marks&&marks<70)
printf("the grade is B\n");
else if (70<=marks&&marks<90)
printf("the grade is A\n");
else if (marks>=90&&marks<=100)
printf("the grade is A+\n");
else
printf("ENTERED MARKS ARE WRONG\n");
}