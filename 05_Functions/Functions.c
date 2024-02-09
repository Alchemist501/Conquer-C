#include <stdio.h>
#include <math.h>
int a, b, c, n, s, i, j;
void sum();
void area();
void average();
void greatest();
void interchange();
void SI();
void Conversion();
int m_display(int r, int c, int ar[r][c]);
int main()
{
    printf("Enter the number : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        sum();
        break;
    case 2:
        area();
        break;
    case 3:
        average();
        break;
    case 4:
        greatest();
        break;
    case 5:
        interchange();
        break;
    case 6:
        SI();
        break;
    case 7:
        Conversion();
        break;
    default:
        break;
    }
    m_display() return 0;
}
void sum()
{
    printf("Enter the numbers : \n");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d \n", a, b, a + b);
}
void area()
{
    float x, y, z, p;
    printf("Enter the number of sides :");
    scanf("%d", &n);
    /*if (n==3)
    {
        printf("Enter the three sides : ");
        scanf("%f %f %f",&x,&y,&z);
        p=(x+y+z)/3;
        printf("Area of the triangle is %f ",(sqrt(p*(p-x)*(p-y)*(p-z))));
    }*/
    if (n == 4)
    {
        printf("Enter the length of square  : ");
        scanf("%d", &a);
        printf("The area of square is %d and perimeter is %d \n", a * a, 4 * a);
        printf("Enter the length and breadth of rectangle : \n");
        scanf("%d %d", &a, &b);
        printf("The area of rectangle is %d \n", a * b);
    }
}
void average()
{
    printf("Enter the three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average is %d ", (a + b + c) / 3);
}
void greatest()
{
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is greatest ", a);
    else
        printf("%d is greatest ", b);
}
void interchange()
{
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after interchange a=%d b=%d\n", a, b);
}
void SI()
{
    float n, P, r;
    printf("Enter the principal amount , no. of years , rate of interest:\n");
    scanf("%f %f %f", &P, &n, &r);
    printf("The amount is : %.2f", (P * n * r) / 100);
}
void Conversion()
{
    float n;
    printf("Enter farenheit : ");
    scanf("%f", &n);
    printf("Celcius:%.2f", ((n - 32) * 5) / 9);
}
int m_display(int r, int c, int ar[r][c])
{
    for (i = 0; i < r; i++)
    {
        printf("Enter the elements in the first row : \n");
        for (j = 0; j < c; j++)
        {
            printf("Enter ar[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
        }
    }
}