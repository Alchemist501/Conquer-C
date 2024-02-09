/*
   BREAK STATEMENT ...
   It is used to come out from the loop
   when qualifying a certain condition.
*/
#include<stdio.h>
int main()
{
    int N,lim;
    printf("enter a number : ");
    scanf("%d",&N);
    printf("enter a limit  : ");
    scanf("%d",&lim);
    for (int i = 0; i <=N; i++)
    {
        printf("%d\n",i);
        if (i==lim)
            break;           
    }
    printf("THE END \n");
    return 0;
}
