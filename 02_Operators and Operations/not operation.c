 /*
   PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS 
   IS DIVISIBLE BY 2 OR NOT...
   */
  #include<stdio.h>
int main()
{
   int num;
   printf("ENTER THE NUMBER : ");
  scanf("%d",&num);
  int c=num%2;
  printf("THE REMAINDER IS :%d \n" , c);
   printf("THE OUTPUT IS %d \n",c==0);
   return 0;
}