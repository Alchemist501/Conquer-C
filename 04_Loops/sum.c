#include<stdio.h>
int main()
{
    int n,N,sum=0;
    printf("Enter starting number : ");
    scanf("%d",&n
    );
    printf("Enter last number : ");
    scanf("%d",&N);
    for (int i=n ; i <=N; i++)
    {
        printf("%d\n",i);
       sum=sum+i;
    } 
    printf("Sum of numbers from %d to %d is %d\n",n,N,sum);
    return 0;
}
    