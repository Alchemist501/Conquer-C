#include<stdio.h>
int main()
{
    int age=18;
    int oldage=age;
    int newage=oldage +2;
    printf("NEW AGE IS : %d " , newage);
    printf("\n");
    int re=1,dollar;
    dollar=74;
    /* 
    order of declaration is imporatant - WRONG DECLARATION ORDER 
    float pi= 3.14;
    float are =pi*rad*rad;
    float rad = 3;
    */
   //valid declaration 
   int age1,age2,age3;
   age1=age2=age3=18;
   //invalid
   //int a1 = a2=a3=18
   
    return 0;
}