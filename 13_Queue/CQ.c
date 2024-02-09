//SIYA P P CU3_55
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int items[SIZE];
int front = -1, rear =-1;
int isFull() {
   if((front == rear + 1) || (front == 0 && rear == SIZE-1)) return 1;
   return 0;
}
int isEmpty() {
   if(front == -1) return 1;
   return 0;
}
void enqueue(int element) {
   if(isFull()) printf("\n Queue is full!! \n");
   else {
       if(front == -1) front = 0;
       rear = (rear + 1) % SIZE;
       items[rear] = element;
       printf("\n Inserted -> %d", element);
   }
}
int dequeue() {
   int element;
   if(isEmpty()) {
       printf("\n Queue is empty !! \n");
       return(-1);
   } else {
       element = items[front];
       if (front == rear){
           front = -1;
           rear = -1;
       } 
       else {
           front = (front + 1) % SIZE;
           
       }
       printf("\n Deleted element -> %d \n", element);
       return(element);
   }
}
void display() {
   int i;
   if(isEmpty()) printf(" \n Empty Queue\n");
   else {
       printf("\nElements are : ");
       for( i = front; i!=rear; i=(i+1)%SIZE) {
           printf("%d ",items[i]);
       }
       printf("%d ",items[i]);
   }
}
int main() {
   int choice, item;
   while(1) {
       printf("\n 1.Insert Element ");
       printf("\n 2.Delete Element ");
       printf("\n 3.Display ");
       printf("\n 4.Quit ");
       printf("\nEnter your choice : ");
       scanf("%d", &choice);
       switch(choice) {
           case 1:{
               if(!isFull()) {
                  printf("\n Enter a value : ");
                  scanf("%d", &item);
                  enqueue(item);
               }else
               printf("\nQUEUE IS FULL\n");
           }
               break;
           case 2:{
               if(!isEmpty()) {
                  dequeue();
               }else
               printf("\nQUEUE IS EMPTY\n");
           }
               break;
           case 3:
               display();
               break;
           case 4:
               exit(0);
           default:
               printf("\n\n Invalid! Choose a choice 1, 2, 3 or 4. \n\n");
               break;
       }
   }
   return 0;
}
     OUTPUT
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 3
 
 Empty Queue

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 2

 Inserted -> 2
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 3

 Inserted -> 3
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 6

 Inserted -> 6
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 9

 Inserted -> 9
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 8

 Inserted -> 8
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

QUEUE IS FULL

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 3

Elements are : 2 3 6 9 8 
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

 Deleted element -> 2 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 
2

 Deleted element -> 3 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 3

 Inserted -> 3
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

 Enter a value : 6

 Inserted -> 6
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 1

QUEUE IS FULL

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 3

Elements are : 6 9 8 3 6 
 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 22


 Invalid! Choose a choice 1, 2, 3 or 4. 


 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

 Deleted element -> 6 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

 Deleted element -> 9 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

 Deleted element -> 8 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

 Deleted element -> 3 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

 Deleted element -> 6 

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 2

QUEUE IS EMPTY

 1.Insert Element 
 2.Delete Element 
 3.Display 
 4.Quit 
Enter your choice : 4