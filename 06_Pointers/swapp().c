#include<stdio.h>
char swap(char*a,char*b);
int main(){
    char x,y;
    printf("Enter two  characters : \n");
    scanf("%c %c",&x,&y);
    printf("%c is the first character and %c is the second character \n",x,y);
    swap(&x,&y);
    printf("After swapping ,\n%c is the first character and %c is the second character \n",x,y);
    return 0;
}
char swap(char*a,char*b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a ,*b;
}