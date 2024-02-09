#include<stdio.h>
int main()
{   /*
    OUTPUT TRUE IMPLIES 1
    OUTPUT FALSE IMPLIES 0
    */
    int S;
    printf("ENTER THE CHARACTER : ");
    scanf("%d",&S);
    printf("THE OUTPUT : %d \n",S>0&&S<9);
    return 0;

}