/*
CONTINUE STATEMENT .....
Its used to skip the specific code under a condition
to the next iteration
*/
#include<stdio.h>
int main()
{
    int N,STOP;
    printf("Enter the limit : ");
    scanf("%d",&N);
    printf("Enter the scary number : ");
    scanf("%d",&STOP);
    printf("NATURAL NUMBERS.......\n\n");
    for(int i=1;i<=N;i++){
        if (i==STOP)
        {
            printf("\nSCARY NUMBER \n\n");
           continue;//skip
        }
        printf("%d\n",i);
    }
    return 0;
}