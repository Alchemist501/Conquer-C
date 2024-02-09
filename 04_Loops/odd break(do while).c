#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number : ");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%2!=0)
        {
            printf("Thank you...\n");
            break;
        }
        
    } while (1);// 1 indicates every condition is true.
return 0;
}
    