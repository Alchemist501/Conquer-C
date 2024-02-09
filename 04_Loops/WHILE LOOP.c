/*
   whileloop syntax.......

 declaration statement;
 while(termination condition)
 {
    // do something 
    updation statement;
 }
*/
#include<stdio.h>
int main()
{
    int N=1,x;
    printf("enter the no. of times : ");
    scanf("%d",&x);
    while (N<=x)
    {
        printf("I LOVE U \n");
        N++;
    }
    return 0;
    
}
