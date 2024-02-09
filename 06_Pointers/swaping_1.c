#include<stdio.h>
void swap(char a,char b);
int main(){
    char x,y;
    printf("Enter two characters :\n");
    scanf("%c %c",&x ,&y);
    swap(x,y);
    return 0;
}
void swap(char a, char b){
    char temp;
    temp =a;
    a=b;
    b=temp;
    printf("The first character is  : %c\n",a);
    printf("The second character is : %c\n",b);
}
