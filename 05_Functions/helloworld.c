#include<stdio.h>
void Hello(int a);
void Hello(int a){
    if (a==0)
    {
        return;
    }
    
    printf("Hello Siya\n");
     Hello(a-1); //recursion
    /*for (int i = 0; i <=a; i++)
    {
        printf("Hello World\n");
    }*/
    
}
int main(){
    int a;
    printf("Enter the count : ");
    scanf("%d",&a);
     Hello(a);
     return 0;
}