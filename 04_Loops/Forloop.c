#include<stdio.h>
void table(int n);
void sum();
void pattern();
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    table(num);
    sum();
    pattern();
    return 0;
}
void table(int n){
    for ( int i = 1; i <=10; i++)
    {
        if (i==10)
        {
            printf("%d x %d = %d \n",i,n,i*n);
            break;
        }
        printf(" %d x %d = %d \n",i,n,i*n);
    }
}
void sum(){
    int sum=0,lim;
    printf("Enter the limit : ");
    scanf("%d",&lim);
    for (int i = 1; i <=lim; i=i+2)
    {
        sum+=i;
    }
    printf("The sum of odd numbers is %d\n",sum);
}
void pattern(){
    int star;
    printf("Enter the number for pattern : ");
    scanf("%d",&star);
    for (int i = 1; i <=star; i++)
    {
        printf("\n");
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
            printf(" ");
        }
        
    }
    printf("\n");
}