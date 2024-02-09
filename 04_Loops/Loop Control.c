/*
a counter variable is a variable that keeps track 
  of the number of times a specific piece of code is executed
*/
#include<stdio.h>
int main()
{
    float N;
    char ch ;
    printf("ENTER THE NUMBER   : ");
    scanf("%f",&N);
    printf("ENTER THE ALPHABET : ");
    scanf("%s",&ch);
    //printf("%s",&ch);
    for(float i=0.00;i<=N;++i)
    {
        printf("%f\n",i);
    }
    for ( char k ='a'; k<=ch; ++k)
    {
        printf("%c\n",k);
    }
    
    printf("\n");
    return 0;
}