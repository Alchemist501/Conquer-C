#include<stdio.h>
//declaration ...
void printHELLO();
//Hello function
void PrintHello(); //declaring fn
void PrintHello(){
    printf("HELLO SIYAAA........\n"); //fn definition
}
//Good bye function
void Goodbye(); //fn declaration
void Goodbye(){
    printf("GOOD BYE \n"); //fn defifnition
}
int main(){
    printHELLO(); //function call
    printHELLO();
    printHELLO();
    PrintHello();
    Goodbye();
    
    return 0;
}
void printHELLO(){  //FUNCTION DEFINITION
    printf("HELLO....!!!\n");
}

