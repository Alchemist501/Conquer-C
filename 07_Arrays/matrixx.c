#include<stdio.h>
void m_read(int r,int c,int matrix[r][c]);
void m_display(int r,int c,int matrix[r][c]);
void m_sum(int r1,int r2,int c1,int c2,int matrix1[r1][c1],int matrix2[r2][c2]);
int main(){
   int r1,r2,c1,c2,matrix1[r1][c1],matrix2[r2][c2];
   printf("Enter the number of rows of first matrix:");
   scanf("%d",&r1);
   printf("Enter the number of columns of first matrix:");
   scanf("%d",&c1);
   m_read(r1,c1,matrix1);
   printf("\n\n");
   m_display(r1,c1,matrix1);
   printf("Enter the number of rows of second matrix:");
   scanf("%d",&r2);
   printf("Enter the number of columns of second matrix:");
   scanf("%d",&c2);
   m_read(r2,c2,matrix2);
   printf("\n\n");
   m_display(r2,c2,matrix2);
   m_sum(r1,r2,c1,c2,matrix1,matrix2);
   return 0;
   }
void m_read(int r,int c,int matrix[r][c]){
   for(int i=0;i<r;i++){
       printf("Enter the elements in the row no.%d\n",i+1);
       for(int j=0;j<c;j++){
           printf("Enter the %d th element:",j+1);
           scanf("%d",&matrix[i][j]);
           }
       }
}
void m_display(int r,int c,int matrix[r][c]){
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           printf("%d\t",matrix[i][j]);
           }
       printf("\n");
       }
}
/*void m_sum(int r1,int r2,int c1,int c2,int matrix1[r1][c1],int matrix2[r2][c2]){
    int sum[100][100]={0},r,c;
    r=(r1>=r2)?r1:r2;
    c=(c1>=c2)?c1:c2;
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           sum[i][j]=matrix1[i][j]+matrix2[i][j];
           }
       printf("\n");
       }
    m_display(r,c,sum);
}*/
void m_sum(int r1, int r2, int c1, int c2, int matrix1[r1][c1], int matrix2[r2][c2]) {
    int sum[100][100] = {0}; // Initialize sum with zeros
    int r = (r1 < r2) ? r1 : r2;
    int c = (c1 < c2) ? c1 : c2;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            //printf("%d\n",sum[i][j]);
        }
    }
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           printf("%d\t",sum[i][j]);
           }
       printf("\n");}
    //m_display(r, c, sum);
}

