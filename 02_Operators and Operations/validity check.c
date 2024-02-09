#include<stdio.h>
int main()
{
    int a=8^8;
    printf("%d \n",a);
    //THE ABOVE STSTEMENT(4) IS  VALID.

    int x;
    x=36;
    int y=x;
    printf("%d\n",y);
    //THE ABOVE STATEMENT IS VALID....
    /* 
    int x,y=x;
    THIS STATEMENT IS INVALID BCUZ
    NO NUMBER IS ASSIGNED TO X.
    HENCE THE PROGRAM CAN'T BE EXECUTED..
    */
   char stars='**';
   printf("THE STARS ARE : %c \n", stars);
   //THIS STATEMENT IS ALSO INVALID ...  
    return 0;
}