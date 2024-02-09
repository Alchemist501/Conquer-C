#include<stdio.h>
int main()
{ /*
    M=> monday
    T=> TUESDAY
    W=> WEDNESDAY
    U=> THURSDAY
    F=> FRIDAY
    R=> SATURDAY
    S=>SUNDAY
    */
    char N;
    printf("ENTER THE DAY character : ");
    scanf("%c",&N);
    switch (N){
        case 'S':printf("sunday\n");
        break;
        case 'M':printf("monday\n");
        break;
        case 'T':printf("tuesday\n");
        break;
        case 'W':printf("wednesday\n");
        break;
        case 'U':printf("thursday\n");
        break;
        case 'F':printf("friday\n");
        break;
        case 'R':printf("saturday\n");
        break;
        default:printf("invalid day numbr\n");
        break;
    }
    return 0;
   
    
    
   
}