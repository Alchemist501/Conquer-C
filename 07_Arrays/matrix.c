#include<stdio.h>
void m_read(int r,int c,int matrix[100][100]);
void m_display(int r,int c, int matrix[100][100]);
int main(){
    int r,c;
    printf("Enter the no. of row :");
    scanf("%d",&r);
    printf("Enter the no. of col :");
    scanf("%d",&c);
    int read[r][c];
    m_read(r,c,read);
    printf("\n\n");
    m_display(r,c,read);
    return 0;
}
void m_read(int r,int c,int matrix[100][100]){
    for (int i = 0; i < r; i++)
    {
        printf("Enter the elements in %d th row : \n",i+1);
        for (int j = 0; j < c; j++)
            scanf("%d",&(matrix[i][j]));
    }
}
void m_display(int r,int c, int matrix[100][100]){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d\t",(matrix[i][j]));
        printf("\n");
    }
}
/*
#include <stdio.h>

void m_read(int r, int c, int matrix[100][100]);
void m_display(int r, int c, int matrix[100][100]);

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int read[100][100];
    m_read(r, c, read);
    m_display(r, c, read);

    return 0;
}

void m_read(int r, int c, int matrix[100][100]) {
    for (int i = 0; i < r; i++) {
        printf("Enter the elements in %dth row:\n", i + 1);
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void m_display(int r, int c, int matrix[100][100]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
*/