#include<stdio.h>
void France();
void India();
int main()
{
    char ch;
    printf("Enter your nation (I for India and F for France): ");
    scanf("%c",&ch);
    if (ch=='F')
    {
        France();
    }
    else if (ch=='I')
    {
        India();
    }
    
    printf("Thank you \n");
    return 0;
}
void France(){
    printf("Bonjour\n");
}
void India(){
    printf("Namasthe\n");
}//USE CHAR AND SINGLE QUOTES FOR ONE CHARACTER TO READ