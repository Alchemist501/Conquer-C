
#include<stdio.h>
int start=0,temp,cindex;
int array[100];
int *bubble(int*,int,int);
int *enter_array(int);
int return_array(int*,int);

int main(){
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    enter_array(n);
    //cindex=n-1;
    //bubble(array,n,cindex);
    return_array(array,n);
    return 0;
}
int *bubble(int *array,int n,int index){
    if (n<=0)
        return array;
    else{
        if (array[index]<array[index-1])
        {
            temp=array[index];
            array[index]=array[index-1];
            array[index-1]=temp;
        }
        index--;
        if (index<=0)
        {
            index=n-1;
            n--;
        }
        bubble(array,n,index);
    }
}
int *enter_array(int n){
    if (n<=0)
        return array;
    else{
        scanf("%d",&array[start]);
        //printf("%d",array[start]);
        start++;
        enter_array(n-1);
    }
}
int return_array(int*array,int n){
    if (n<=0)
        return array[n];
    else{
        return_array(array,n-1);
        printf("%d\t",array[n-1]);
    }
}