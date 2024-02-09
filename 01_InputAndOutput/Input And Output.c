#include <stdio.h>
void Hello();
void Ass_1();
void Ass_2();
void Ass_3();

int main()
{
    Hello();
    Ass_1();
    Ass_2();
    Ass_3();
    return 0;
}
void Hello()
{
    printf("HELLO KUTTAAAA..........\n\n\n\n");
}
void Ass_1()
{
    char ch;
    printf("Enter a character : ");
    scanf("%s", &ch);
    printf("The character you entered is %s \n\n\n", &ch);
}
void Ass_2()
{
    int n1;
    float n2;
    printf("Enter the integer number : ");
    scanf("%d", &n1);
    printf("Enter the floating number : ");
    scanf("%f", &n2);
    printf("The sum is %f\n\n\n", n1 + n2);
}
void Ass_3()
{
    int P;
    float R, n;
    printf("Enter the principal amount : ");
    scanf("%d", &P);
    printf("Enter the number of years  : ");
    scanf("%f", &n);
    printf("Enter the interest         : ");
    scanf("%f", &R);
    printf("The interest amount is %f\n", (R * P * n) / 100);
    printf("Total amount to be paid is %f\n", P + (R * P * n) / 100);
}