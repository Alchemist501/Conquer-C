#include<stdio.h>
int price(int value);
int main(){
    int value;
    printf("Enter the actual price :");
    scanf("%d",&value);
    int MRP= price(value);
    printf("MRP = %d\n", MRP);
    return 0;
}
int price(int value){
    int mrp,gst;
    gst=value*(0.18);
    printf("%d is gst \n",gst);
    mrp=value+gst;
    return mrp;
}