#include<stdio.h>
int main(){
int mark;
printf("EMNTER THE MARKS : ");
    scanf("%d",&mark);
    if (mark>=30 && mark<=100)
    printf("passed\n");
    else if (mark<30&&mark>=0)
        printf("failed\n");
    else
    printf("wrong marks entered\n");
    return 0;
    
}