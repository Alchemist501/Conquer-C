#include<stdio.h>
int main()
{   //IS SUNDAY & SNOWING
    int sun,snow;
    printf("ENTER THE NO : ");
    scanf("%d",&sun);
    printf("ENTER NO_2 : ");
    scanf("%d",&snow);
    printf("THE OUTPUT IS : %d\n", sun&&snow);
    
    //IS MONDAY OR RAINING
    int mon,rain;
    printf("\n\nENTER THE NO : ");
    scanf("%d",&mon);
    printf("ENTER NO_2 : ");
    scanf("%d",&rain);
    printf("THE OUTPUT IS : %d\n", mon||rain);

    /*IF A NUMBER IS GREATER THAN 9
    AND LESS THAN 100*/
    int N;
    printf("\n\nENTER THE NO : ");
    scanf("%d",&N);
    printf("THE OUTPUT IS : %d\n",N>9&&N<100);
    return 0;
}