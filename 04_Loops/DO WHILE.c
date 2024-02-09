/*
   DO WHILE LOOP......
   
   declaration statement;
   do{
      // code
      updation statement;
    }while(termination condition);
   }
*/
#include<stdio.h>
int main()
{   
    int sum, i ,N;
    sum=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&N);
    i=N;
    do{
        sum=sum+i;//dont write i-- code here 
        printf("%d\n",i);
        i--;
    }while (i>=0);
    printf("The sum is %d\n",sum);
    return 0;
}
    /* If we write i--- code in row 20 
   instead of sum then it will make logical error
    */