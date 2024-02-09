//SIYA P P CU55
#include<stdio.h>
#include<math.h>
int i;
struct poly{
   int exp;
   float coeff;
   };
void displaypoly(struct poly term[],int terms){
   for( i=0;i<terms-1;i++)
      printf("%.1f(x^(%d))+",term[i].coeff,term[i].exp);
   printf("%.1f(x^(%d)))",term[terms-1].coeff,term[terms-1].exp);
   }
void input(struct poly term[],int terms){
   for(i=0;i<terms;i++){
      printf("Enter the coeff:");
      scanf("%f",&term[i].coeff);
      printf("Enter the exp:");
      scanf("%d",&term[i].exp);
   }
   displaypoly(term,terms);
}
int eval(struct poly term[], int x, int n){
   int sum=0;
   for(i=0;i<n;i++)
      sum+=term[i].coeff*(int)pow(x,term[i].exp);
      return sum;
      }

int main(){
   int n,x;
   printf("Enter the number of terms ");
   scanf("%d",&n);
   printf("Enter the value of x");
   scanf("%d",&x);
   struct poly term[n];
   input(term , n);
   printf("\nvalue = %d\n",eval(term,x,n));
   return 0;
}


OUTPUT

Enter the number of terms 4
Enter the value of x1
Enter the coeff:4
Enter the exp:3
Enter the coeff:3
Enter the exp:2
Enter the coeff:2
Enter the exp:1
Enter the coeff:1
Enter the exp:0
4.0(x^(3))+3.0(x^(2))+2.0(x^(1))+1.0(x^(0)))
value = 10
