#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
       printf("lowercase\n");
    else if (ch>='A'&&ch<='Z')
    printf("UPPERCASE\n");
    else
    printf("nothing....\n");
            return 0;}
