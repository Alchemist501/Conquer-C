#include<stdio.h>
int main()
{   
    int N,limit;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&N);
    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);
    printf("\n\n MULTIPLICATION TABLE IN REVERSE ORDER \n\n");
    for (int i = limit; i >=1; i--)
    {
        printf("%d*%d = %d\n",i,N,i*N);
    }
    return 0;
}