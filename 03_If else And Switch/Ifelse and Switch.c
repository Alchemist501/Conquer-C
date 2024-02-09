#include <stdio.h>
void A();
void B();
void Day();
int main()
{
    A();
    B();
    Day();
    return 0;
}
void A()
{
    float marks;
    printf("Enter the marks : ");
    scanf("%f", &marks);
    if (marks >= 50)
    {
        printf("The student is passed\n");
    }
    else
        printf("The Student is failed\n");
}
void B()
{
    float MARKS;
    printf("Enter the marks obtained : ");
    scanf("%f", &MARKS);
    if (MARKS >= 90)
    {
        printf("The Grade obtained is A\n");
    }
    else if (MARKS >= 80 && MARKS < 90)
    {
        printf("The Grade obtained is B\n");
    }
    else if (MARKS >= 70 && MARKS < 80)
    {
        printf("The Grade obtained is C\n");
    }
    else if (MARKS >= 60 && MARKS < 70)
    {
        printf("The Grade obtained is D\n");
    }
    else if (MARKS >= 50 && MARKS < 60)
    {
        printf("The Grade obtained is E\n");
    }
    else
        printf("The student is failed\n");
}
void Day()
{
    int daynum;
    printf("Enter the day number : ");
    scanf("%d", &daynum);
    switch (daynum)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day number\n");
        break;
    }
}
