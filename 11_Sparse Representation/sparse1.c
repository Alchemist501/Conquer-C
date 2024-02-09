//VinayakJaimohan cu 60
#include<stdio.h>
int s[100][100],sr[100][3];
int i,j;
void print(int sr[100][3]){
   for(i=0;i<sr[0][2]+1;i++)
      printf("%d  %d  %d\n",sr[i][0],sr[i][1],sr[i][2]);
   }
   
int sparse(int s[100][100],int r,int c){
   int k=1,count;
   sr[0][0]=r;
   sr[0][1]=c;
   for( i=0;i<r;i++){
      for( j=0;j<r;j++){
         if(s[i][j]!=0){
            sr[k][0]=i;
            sr[k][1]=j;
            sr[k][2]=s[i][j];
            k++;
            }
        }
   }
   sr[0][2]=k-1;
   count=k-1;
   print(sr);
   return count;
}
int readmatrix(int r,int c){
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
          printf("enter element [%d] [%d]: ",i+1,j+1);
         scanf("%d",&s[i][j]);
         }
      }
   sparse(s,r,c);
   }
int main(){
int r,c,count;
float sparsity;
   printf("Enter the number of rows:");
   scanf("%d",&r);
   printf("Enter the number of columns:");
   scanf("%d",&c);
   printf("Enter the elements\n");
  count=readmatrix(r,c);
 
   sparsity=(((float)(r*c)-count)/(float)(r*c));
printf("the sparsity of the sparse matrix is %f",sparsity);
   return 0;
   }

   OUTPUT

Enter the number of rows:3
Enter the number of columns:4
Enter the elements
enter element [1] [1]: 0
enter element [1] [2]: 0
enter element [1] [3]: 3
enter element [1] [4]: 0
enter element [2] [1]: 5
enter element [2] [2]: 0
enter element [2] [3]: 0
enter element [2] [4]: 0
enter element [3] [1]: 0
enter element [3] [2]: 0
enter element [3] [3]: 0
enter element [3] [4]: 0
3  4  2
0  2  3
1  0  5
the sparsity of the sparse matrix is 0.833333 