/*#include<stdio.h>
#include<stdlib.h>
void max(int *a, int *b);
void print_Array(int*N);
void Eng_letters();
int main(){
    int a ,b,NUM, Arr[100];
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Enter the number of elements in array :");
    scanf("%d",&NUM);
    print_Array(&NUM);
    int *A=&a;
    int *B=&b;
    max(A,B);
    Eng_letters();
    return 0;
}
void max(int *a, int *b){
    if (a>b)
    {
        printf("%d is greater \n",*a);
    }
    else
        printf("%d is greater \n",*b);
}
void print_Array(int*N){
    int Arr[100];
    for (int i = 0; i <*N; i++)
    {
        scanf("%d",&Arr[i]);
    }
    for (int i = --*N; i >=0; i--)
    {
        printf("%d\n",Arr[i]);
    }
}
void Eng_letters(){
    char* ptr = malloc(26 * sizeof(char));
    for (int i = 90; i >= 65; i--)
    {
        *ptr = i;
        ptr--;
    }
    ptr += 26;
    for (int i = 0; i <26; i++)
    {
        printf("%c\n", *(ptr+i));
    }
    free(ptr);
}
/* Read input from STDIN. Print your output to STDOUT*/
/* Read input from STDIN. Print your output to STDOUT*/
/*#include<stdio.h>
int count_animals(int *animals, int num,int mean_energy);
int min_energy(int *animals,int num, int x);
int main()
{
	//Write code here
	int num,x;
	printf("Enter the number of animals : ");
	scanf("%d",&num);
	printf("\nEnter the minimum energy level : ");
	scanf("%d",&x);
	int animals[num];
	printf("\nEnter the energy capacity of animals: ");
	for(int i=0;i<num;i++){
		scanf("%d",&animals[i]);
	}
	int minm_energy=min_energy(animals,num,x);
	printf("\nThe minimum energy required is : %d\n",minm_energy);
	return 0;
}
int min_energy(int *animals,int num, int x){
	int mean_energy,count;
	int max_energy=animals[num-1];
	int min_energy=animals[0];
	while(min_energy<=max_energy){
		mean_energy=(max_energy+min_energy)/2;
		count=count_animals(animals,num,mean_energy);
		if(count<x){
			max_energy=mean_energy-1;
		}else if(count>x){
			min_energy=mean_energy+1;
		}else
		    return mean_energy;
	}
	return -1;
}
int count_animals(int *animals, int num, int mean_energy){
	int count=0;
	for(int i=0;i<num;i++){
		if(animals[i]>=mean_energy)
		    count++;
	}
	return count;
}*/
//Read input from STDIN. Print your output to STDOUT
#include<stdio.h>
int count_animals(int *animals, int num,int mean_energy);
int min_energy(int *animals,int num, int x);
int main()
{
	//Write code here
	int num,x;
	printf("Enter the number of animals : ");
	scanf("%d",&num);
	printf("\nEnter the minimum energy level : ");
	scanf("%d",&x);
	int animals[num];
	printf("\nEnter the energy capacity of animals: ");
	for(int i=0;i<num;i++){
		scanf("%d",&animals[i]);
	}
	int minm_energy=min_energy(animals,num,x);
	printf("\nThe minimum energy required is : %d\n",minm_energy);
	return 0;
}
int min_energy(int *animals,int num, int x){
	int mean_energy,count;
	int max_energy=animals[num-1];
	int min_energy=animals[0];
	while(min_energy<=max_energy){
		mean_energy=(max_energy+min_energy)/2;
		count=count_animals(animals,num,mean_energy);
		if(count<x){
			max_energy=mean_energy-1;
		}else if(count>x){
			min_energy=mean_energy+1;
		}else
		    return mean_energy;
	}
	return -1;
}
int count_animals(int *animals, int num, int mean_energy){
	int count=0;
	for(int i=0;i<num;i++){
		if(animals[i]>=mean_energy)
		    count++;
	}
	return count;
}