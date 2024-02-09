#include<stdio.h>
int main()
{
    int n,N,flag=0;
    printf("Enter the starting number : ");
    scanf("%d",&n);
    printf("Enter the ending number : ");
    scanf("%d",&N);
    for (int i = n; i <=N; i++)
    {
        //printf("%d\n",i); //to check the prime numbers...
        for(int j=2;j<=i;j++)    
        {    
            if(i%j==0)    
            {
                if (i==j)
                    continue;
                flag=1;      
            }    
        }   
        if(flag==0)    
            printf("%d\n",i);   
            
    }
    
    return 0;

}