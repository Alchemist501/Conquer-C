//SIYA P P CU55
#include<stdio.h>
int i,j,k,count,min,flag=0,sp[100][3];
void trans(int count,int sp[][3],int tr[][3]);
void display(int r,int c ,int arr[r][c]){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
           printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
int input_matrix(int arr[][3]){
    printf("Enter the first row of sparse representation : \n");
    scanf("%d",&arr[0][0]);
    scanf("%d",&arr[0][1]);
    scanf("%d",&arr[0][2]);
    count=arr[0][2];
    printf("Enter the elements as triplet of row col value \n");
    for(i=1;i<=count;i++){
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
        scanf("%d",&arr[i][2]);
    }
    printf("The sparse representation entered is  :\n");
    display(count+1,3,arr);
    return count;
}
void transcheck(int count,int sp[][3],int tr[][3]){
    for(i=0;i<count;i++){
        for(j=0;j<3;j++){
            if(sp[i][j]!=tr[i][j]){
                flag++;
                break;
            }
        }
    }
    if(flag==0)
        printf("The matrix is symmetric\n");
    else
        printf("The matrix is not symmetric\n");
}
int main(){
    count=input_matrix(sp);
    int tr[count+1][3];
    trans(count,sp,tr);
    return 0;
}
void trans(int count,int sp[][3],int tr[][3]){
    tr[0][0]=sp[0][1];
    tr[0][1]=sp[0][0];
    tr[0][2]=sp[0][2];
    k=1;
    min=1;
    while(k<count+1){
        i=min+1;
        while(i<count+1){
            if((sp[min][1]>sp[i][1])||(sp[min][1]==sp[i][1]&&sp[min][0]>sp[i][0]))
                min=i;
            i++;
        }
        if(min=k){
            tr[k][0]=sp[k][1];
            tr[k][1]=sp[k][0];
            tr[k][2]=sp[k][2];
            k++;min++;
        }else{
            tr[k][0]=sp[min][1];
            tr[k][1]=sp[min][0];
            tr[k][2]=sp[min][2];
            k++;
        }
    }
    printf("The transpose is : \n");
    display(count+1,3,tr);
    transcheck(count+1,sp,tr);
}

OUTPUT

First case=>

Enter the first row of sparse representation : 
3
4
1
Enter the elements as triplet of row col value 
3
2
9
The sparse representation entered is  :
3       4       1
3       2       9

The transpose is : 
4       3       1
2       3       9

The matrix is not symmetric

Second case=>

Enter the first row of sparse representation : 
3
3
3
Enter the elements as triplet of row col value 
1
1
6
2
2
4
3
3
9
The sparse representation entered is  :
3       3       3
1       1       6
2       2       4
3       3       9

The transpose is : 
3       3       3
1       1       6
2       2       4
3       3       9

The matrix is symmetric
