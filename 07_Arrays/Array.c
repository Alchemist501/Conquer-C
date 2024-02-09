#include <stdio.h>
void Array();
int main()
{
    Array();
    return 0;
}
void Array()
{
    int n;
    printf("Enter the number of digits : ");
    scanf("%d", &n);
    printf("Enter the elements:");
    int N[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", N[i]);
    }
}
