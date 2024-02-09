#include<stdio.h>
int main()
{
    int N,n;
    printf("Enter a number to check factors : ");
    scanf("%d",&N);
    do
    {
        printf("Enter number : ");
        scanf("%d",&n);
        if (n%N==0)
        {
            printf("%d is a factor \n",n);
            printf("%d/%d= %d.%d\n",n,N,n/N,n%N);
            printf("Thank you .......\n");
            break; // break will make the program come out from nested loops also.
        }
        else{
            printf("%d is not a factor \n",n);
            printf("%d/%d= %d.%d\n",n,N,n/N,n%N);
        }
        
    } while (1);// 1 indicates every condition is true.
return 0;
}
    