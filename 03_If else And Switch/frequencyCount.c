#include<stdio.h>
int main(){
     int count,i,j,frequency=0;
     char ch[]={'1','2','3','2','1'};
     int size = sizeof(ch)/sizeof(ch[0]);
     int visited[size];
     for(j=0;j<size;j++)
         visited[j]=0;
     for(i=0;i<size;i++){
         count = 1;
         if(visited[i]!=-1){
             if(i==size-1)
                 frequency = 1;
             else{
                 for(j=0;j<size;j++){
                     if(ch[i]==ch[j]&&visited[j]!=-1){
                         count++;
                         visited[j]=-1;
                     }
                 }
                 visited[i]=-1;
                 frequency = count;
             }
             if(frequency != 0 ){
                 printf("%c\t",ch[i]);
                 printf("%d\n",frequency);
             }
         }
     } 
     return 0;
}
