#include<stdio.h>
int main()
{
    int N;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&N);
   if (N>0)
   {
printf("POSITIVE \n");
if (N%2==0)
printf("EVEN NUMBER\n");
else
printf("ODD NUMBER\n");
 }
 else{
 printf("NEGATIVE\n");  
 if (N%2==0)
printf("EVEN NUMBER\n");
else
printf("ODD NUMBER\n");
 }
    return 0;
}