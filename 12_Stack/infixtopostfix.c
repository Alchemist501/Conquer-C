//SIYA P P CU3_55
#include<stdio.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(char x){
    stack[++top]=x;
}
char pop(){
    if(top==-1)
        return -1;
    else 
        return stack[top--];
}
int priority(char x){
    if(x=='(')
        return 0;
    if(x=='+' || x=='-')
        return 1;
    if(x=='*' || x=='/')
        return 2;
    if(x=='^')
        return 3;
}
int main(){
    char exp[10];
    char *e,x;
    printf("enter infix : ");
    scanf("%s",&exp);
    e=exp;
    printf("postfix is : ");
    while(*e!='\0'){
        if(isalnum(*e))
            printf("%c",*e);
        else if (*e=='(')
            push(*e);
        else if(*e==')'){
            while((x=pop())!='(')
                printf("%c",x);
        }
        else if(*e=='+' || *e=='-'){
            while(top!=-1 &&priority(stack[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        else if(*e=='/' || *e=='*'){
            while(top!=-1 &&priority(stack[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        else if (*e=='^'){
        while(top!=-1 &&priority(stack[top])>=priority(*e))
            printf("%c",pop());
        push(*e);
        }
        e++;
    }
    while(top!=-1)
    printf("%c\t",pop());
    return 0;
}
         OUTPUT
enter infix : a+b*c-d
postfix is : abc*+d-