#include<stdio.h>
int main()
{
    int N,n;
    printf("Enter the number of rows   : ");
    scanf("%d",&N);
    printf("Enter the number of columns   : ");
    scanf("%d",&n);
    for(int i=1;i<=N;++i)
    {
        for(int j=1;j<n;j++){
            printf("*");
        }
        printf("*\n");
    }   
    return 0;
}