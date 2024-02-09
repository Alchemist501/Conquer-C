#include<stdio.h>
int main()
{
    int i,L;
    printf("Enter the starting number : ");
    scanf("%d",&i);
    printf("Enter the last number : ");
    scanf("%d",&L);
    printf("\nODD NUMBERS FROM %d TO %d.......\n\n",i,L);
    for ( ; i <=L; i+=2)
    {
        if (i%2==0)
        {
            printf("%d is not an odd number \n",i);
            i++;
        }
        
        printf(" %d\n",i);
    }
    
    return 0;
}