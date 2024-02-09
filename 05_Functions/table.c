#include<stdio.h>
void table(int a);
int main()
{   
    int N;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&N);
    
        int a=N;
    printf("\n\n MULTIPLICATION TABLE \n\n");
    table( a);
    return 0;
}
void table(int a){
    for (int i = 1; i <=10; i++)
    {
        printf("%d",a);
        printf("*%d",i);
        printf(" = %d\n",a*i);
    }
}