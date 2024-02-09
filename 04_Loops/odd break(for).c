#include<stdio.h>
int main()
{
    int N,n;
    printf("Enter the limit : ");
    scanf("%d",&N);
    printf("enter  numbers below......... \n");
    for (int i = 0; i <N; i++)
    {
        scanf("%d",&n);
        if (n%2==1)
        {
            printf("The program ended \n");
            break;
        }
    }
return 0;
}
    