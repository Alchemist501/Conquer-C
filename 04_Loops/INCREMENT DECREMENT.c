#include<stdio.h>
int main()
{
/*
program to chck incrementation and 
decremination.....
*/
int i;

//postincrementation 
printf("the value of i = ");
scanf("%d",&i);
printf("the value after postincrementation = %d\n",i++);
printf("i = %d\n\n",i);

//preincrementation 
printf("value of i = %d\n ",i);
printf("the value after preincrementation = %d\n",++i);
printf("i = %d\n\n",i);

//postdecrementation 
printf("value of i = %d\n ",i);
printf("the value after postdecrementation = %d\n",i++);
printf("i = %d\n\n",i);

//predecrementation 
printf("value of i = %d\n ",i);
printf("the value after predecrementation = %d\n",++i);
printf("i = %d\n\n",i);

return 0;
}