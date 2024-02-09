#include<stdio.h>
int Ass(int *a,int *b);
int main(){
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    Ass(&x,&y);
    return 0;
}
int Ass(int *a,int *b){
    int *sum,*product,*avg;
    //*sum=(*a)+(*b);
    *product=(*a)*(*b);
    *avg=(*sum)/2;
    printf("Sum is %d , product is %d and average is %d",*sum,*product,*avg);
    return 0;
}