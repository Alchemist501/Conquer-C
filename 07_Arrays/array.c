#include<stdio.h>
int main(){
    int i,n=6,j,temp,k;
    int a[]={16,25,44,23,12,61};
    for ( i = n-1; i >=0; i--)
    {
        for ( j = n-i-1; j >=0; j--)
        {
            if (a[j+1]>a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                printf("%d",a[j]);/* code */
            }
            /* code */
        }
        
    }
    //for (k = 0; k < n; k++)
       // {
            //printf("%d\n",a[k]);/* code */
       // }
       return 0;

        /* code */
}
