// //SIYA P P CU3_55
// #include<stdio.h>
// #define maxsize 5
// int emp=0,full=1,i,ele,n;
// int stack[maxsize],top=-1;
// void is_empty(){
//     if(top==-1)
//         emp=0;
//     else
//         emp=1;
// }
// void is_full(){
//     if(top==maxsize-1)
//         full=1;
//     else
//         full=0;
// }
// void push(){
//     is_full();
//     if(full==1)
//         printf("Stack full\n\n");
//     else{
//             printf("Enter the element:");
//             scanf("%d",&ele);
//             stack[++top]=ele;
//     }
//     printf("\n");
// }
// void pop(){
//     is_empty();
//     if(emp!=0)
//         printf("The element popped is %d\n\n",stack[top--]);
//     else 
//         printf("Stack is empty\n\n");                                                       
// }
// void peek(){
//     is_empty();
//     if(emp!=0)
//         printf("The peek is %d\n\n",stack[top]);
//     else 
//         printf("Stack is empty\n\n"); 
// }
// void display(){
//     is_empty();
//     if(emp!=0){
//        for(i=top;i>=0;i--)
//            printf("%d\t",stack[i]);
//        printf("\n");
//     }
// }
// int main(){
//     int op;
//     int a=1;
//     while(a) {
//     printf("Press 1 for Push \nPress 2 for Pop\nPress 3 for Peek \nPress 4 for Display\nPress 5 to end\n");
//     scanf("%d",&op);
//     switch(op){
//     case 1:  push();
//              break;
//     case 2: pop();
//             break;
//     case 3: peek();
//             break;
//     case 4: display();
//             break;
//     case 5: a=0;
//             break;
//     default:printf("Invalid number entered\n");
//             break;        
//     }}
//     return 0;
// }
//       OUTPUT
// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:3

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:6

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:9

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 4
// 9       6       3
// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 3
// The peek is 9

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 2
// The element popped is 9

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 2
// The element popped is 6

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 2
// The element popped is 3

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 2
// Stack is empty

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 3
// Stack is empty

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:2

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:5

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:8

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:6

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Enter the element:9

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 1
// Stack full


// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 3
// The peek is 9

// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 4
// 9       6       8       5       2
// Press 1 for Push 
// Press 2 for Pop
// Press 3 for Peek 
// Press 4 for Display
// Press 5 to end
// 5
#include<stdio.h>
#define maxsize 5
int Stack1[maxsize] , Stack2[maxsize],ele,rear= -1,front =-1;
int Queue[maxsize],top1 =-1,top2=-1;
void enqueue(){
    if(rear ==maxsize-1){
        printf("Queue is Full \n");
        return ;
    }
    else if(front ==-1){
        front = rear =0;
        printf("Enter the elements in the Queue  \n");
        scanf("%d",&ele);
        Queue[rear] = ele;
    }
    else{
        printf("Enter the elements in the Queue  \n");
        scanf("%d",&ele);
        Queue[++rear] = ele;
    }
}
void dequeue(){
    if(front ==-1){
        printf("Queue is empty \n");
        return ; 
    }else if(front == rear){
        printf("%d is removed\n",Queue[front]);
        rear = front =-1;
    }else{
        printf("%d is removed\n",Queue[front]);
        front++;
    }
}
void poptopush(int Stack1[maxsize],int Stack2[maxsize]){
    if(top1 == -1){
        printf("Stack is empty\n");
        return;
    }else{
        printf("%d is popped to stack2\n",Stack1[top1]);
        Stack2[++top2]=Stack1[top1--];
    }
}
void push(int Stack[maxsize]){
    if(top1 == maxsize-1){
        printf("Full aanh");
        return ; 
    }else{
        printf("ENter the element :");
        scanf("%d",&ele);
        Stack[++top1] = ele;
    }
}
void display(int Queue[maxsize]){
    for(int i =0;i<maxsize;i++){
        printf("%d\t",Queue[i]);
    }
}
int main(){
    printf("ENter the elements in the Queue \n");
    for(int i =0;i<maxsize;i++)
        enqueue();
    display(Queue);
    top1=rear;
    for(int i =0;i<maxsize;i++)
        poptopush(Queue,Stack2);
    display(Stack2);
    return 0;
}

