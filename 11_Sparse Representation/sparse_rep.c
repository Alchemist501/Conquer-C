//SIYA P P CU55
#include<stdio.h>
int i,j,count,k=1;
void display(int r,int c ,int arr[r][c]){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
           printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
void input_matrix(int r, int c,int arr[r][c]){
    printf("Enter the elements \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
           scanf("%d",&arr[i][j]);
    }
    printf("The matrix entered is :\n");
    display(r,c,arr);
}
int non_zero(int r,int c, int arr[r][c]){
    count =0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]!=0)
               count++;
        }
    }
    return count;
}
void sparcity(int count,int r, int c){
    printf("The sparcity of the array is %.2f \n",((((float)(r*c)-count)/(r*c))*100));
}
void sparse(int r,int c,int count,int arr[r][c], int sp[count+1][3]){
    sp[0][0]=r;
    sp[0][1]=c;
    sp[0][2]=count;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]!=0){
                sp[k][0]=i+1;
                sp[k][1]=j+1;
                sp[k][2]=arr[i][j];
                k++;
            }
        }
    }
    printf("The sparse representation is \n");
    display(count+1,3,sp);
    sparcity(count,r,c);
}
int main(){
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    input_matrix(r,c,arr);
    count=non_zero(r,c,arr);
    int sp[count+1][3];
    sparse(r,c,count,arr,sp);
    return 0;
}

        OUTPUT

Enter the number of rows:3
Enter the number of columns:4
Enter the elements 
0
0
2
0
0
0
3
0
0
0
0
0
The matrix entered is :
0       0       2       0
0       0       3       0
0       0       0       0

The sparse representation is 
3       4       2
1       3       2
2       3       3

The sparcity of the array is 83.33 