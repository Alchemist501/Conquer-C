#include <stdio.h>
int main()
{
    int rad;
    printf("PROGRAM TO FIND THE AREA OF THE CIRCLE \n \n");
    printf("Enter the radius of the circle :");
    scanf("%d", &rad);
    int area = rad * rad * 3.14;
    printf("AREA OF THE CIRCLE : %d", area);
    printf("\n");
    return 0;
}