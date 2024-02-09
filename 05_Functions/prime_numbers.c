#include<stdio.h>
int primecheck(int n,int divisor);
int printprime(int n );
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(primecheck(num,2))
        printf("%d is a prime number ",num);
    printf("The prime numbers from 1 to %d are \n",num);
    printprime(num);
    return 0;
}
int primecheck(int n,int divisor ){
if(n<2)
    return 0;
else if (divisor>n/2){
    return 1;
    }
else if(n%divisor==0){
    return 0;
    }
else{ 
    return primecheck(n,++divisor);
    }
}    
int printprime(int n){
    if(n<2)
        return 1;
    else 
        printprime(n-1);
        if(primecheck(n,2)){
            printf("%d\n" ,n); 
        }
    return 0;
}
        
