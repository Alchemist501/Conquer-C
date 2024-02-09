/*#include<stdio.h>
void Address(int *n);
int main(){
    int n=4;
    printf("%p\n",&n);
    Address(&n);
    return 0;
}
void Address(int *n){
    printf("%p\n", &n);
}*/
#include<stdio.h>

void printAddress(int *n);

int main(){
    int n=4;
    printf("%p\n", (void*)&n);
    printAddress(&n);
    return 0;
}

void printAddress(int *n){
    printf("%p\n", (void*)n);
}
