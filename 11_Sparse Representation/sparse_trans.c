//SIYA P P CU55
#include<stdio.h>
int i,j,min,k,count=0,temp,arr[100][3];
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
void transpose(int count,int sp[][3]){
    k=1;
    min=1;
    temp=sp[0][0];
    sp[0][0]=sp[0][1];
    sp[0][1]=temp;
    while(k<count+1){
        i=min+1;
        while(i<count+1){
            if((sp[min][1]>sp[i][1])||(sp[min][1]==sp[i][1]&&sp[min][0]>sp[i][0]))
                min=i;
            i++;
        }
        if(min==k){
            temp=sp[min][0];
            sp[min][0]=sp[min][1];
            sp[min][1]=temp;
            min++;
            k++;
        }
        else{
            temp=sp[min][1];
            sp[min][1]=sp[k][1];
            sp[k][1]=sp[min][0];
            sp[min][0]=sp[k][0];
            sp[k][0]=temp;
            temp=sp[min][2];
            sp[min][2]=sp[k][2];
            sp[k][2]=temp;
            k++;
        }
    }
    printf("The transpose representation is : \n");
    display(count+1,3,sp);
}
int main(){
    count=input_matrix(arr);
    transpose(count,arr);
    return 0;
}

OUTPUT

Enter the first row of sparse representation : 
3
4
5
Enter the elements as triplet of row col value 
1
1
3
1
3
6
2
1
3
3
1
3
3
3
9
The sparse representation entered is  :
3       4       5
1       1       3
1       3       6
2       1       3
3       1       3
3       3       9

The transpose representation is : 
4       3       5
1       1       3
1       2       3
1       3       3
3       1       6
3       3       9
