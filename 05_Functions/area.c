#include<stdio.h>
#include<math.h>
void rectangle();
void square();
void circle();
int main(){
    char figure;
    printf("enter the name of figure ('c' for circle ,'s' for square and 'r' for rectangle) : ");
    scanf("%c",&figure);
    switch (figure)
    {
    case 'c':
        circle();
        break;
    case 'r':
        rectangle();
        break;
    case 's':
        square();
        break;
    default: printf("invalid input \n");
        break;
    }
    return 0;
}
void rectangle(){
    float l,b;
    printf("Enter the length : ");
    scanf("%f",&l);
    printf("Enter the breadth : ");
    scanf("%f",&b);
    printf("The area is %f\n",l*b);
}
void circle(){
    float r;
    printf("Enter the length of radius : ");
    scanf("%f",&r);
    printf("The area is %f\n",r*r*3.14);
}
void square(){
    float a;
    printf("Enter the length of the side : ");
    scanf("%f",&a);
    printf("The area is %f\n",a*a);
}