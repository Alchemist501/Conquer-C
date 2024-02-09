#include<stdio.h>
int main()
{   
    int N,limit;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&N);
    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);
    printf("\n\n MULTIPLICATION TABLE \n\n");
    for (int i = 1; i <=limit; i++)
    {
        printf("%d",N);
        printf("*%d",i);
        printf(" = %d\n",N*i);
    }
    return 0;
}