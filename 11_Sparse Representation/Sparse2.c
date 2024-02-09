//sparse addition
//VinayakJaimohan cu 60
#include<stdio.h>
void Add(int Ar[100][3],int Br[100][3],int r[100][3]){
int r1=Ar[0][0],c1=Ar[0][1],r2=Br[0][0],c2=Br[0][1];
if(r1!=r2 || c1!=c2)
printf("cannot add");
else{
r[0][0]=Ar[0][0];
r[0][1]=Ar[0][1];
int n=1,m=1,k=1;
for(int i=0;i<r1;i++){
for(int j=0;j<c1;j++){
if(Ar[m][0]==i && Ar[m][1]==j && Br[n][0]==i && Br[n][1]==j){
r[k][0]=Ar[m][0];
r[k][1]=Br[n][1];
r[k++][2]=Ar[m++][2]+Br[n++][2];
}
else if(Ar[m][0]==i && Ar[m][1]==j){
r[k][0]=Ar[m][0];
r[k][1]=Ar[m][1];
r[k++][2]=Ar[m++][2];
}
else if(Br[n][0]==i && Br[n][1]==j){
r[k][0]=Br[n][0];
r[k][1]=Br[n][1];
r[k++][2]=Br[n++][2];
}
}
}
r[0][2]=k-1;
}
}
int Read(int r,int c,int nonzero,int rep[][3])
{
int i;
    rep[0][0]=r;
    rep[0][1]=c;
    rep[0][2]=nonzero;
for(i=1;i<nonzero+1;i++)
{
printf("Enter the index and value of nonzero element:\n");
scanf("%d",&rep[i][0]);
scanf("%d",&rep[i][1]);
scanf("%d",&rep[i][2]);
}

}


void display(int sr[100][3]){
for(int i=0;i<sr[0][2]+1;i++)
printf("%d   %d   %d\n",sr[i][0],sr[i][1],sr[i][2]);

}
void main(){
int A[100][100],Ar[100][3],B[100][100],Br[100][3],r1,c1,r2,c2,r[100][3],nz1,nz2,rep1[100][3],rep2[100][3];
printf("enter number of rows of 1st: ");
scanf("%d",&r1);
printf("enter number of columns of 1st: ");
scanf("%d",&c1);
printf("enter number of non zero of first ");
scanf("%d",&nz1);
printf("enter number of rows of 2nd: ");
scanf("%d",&r2);
printf("enter number of columns of 2nd: ");
scanf("%d",&c2);
printf("enter number of non zero of second ");
scanf("%d",&nz2);
Read(r1,c1,nz1,rep1);
Read(r1,c1,nz2,rep2);
display(rep1);
printf("\n");
display(rep2);
printf("\n");
Add(rep1,rep2,r);
display(r);
}

