#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node* next;
};
struct node* Qfront = NULL;
struct node* Speak = NULL;
struct node* newnode = NULL;
struct node* ptr = NULL;
struct node* create_node(char data){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(newnode==NULL){
        printf("Memory allocation failed \n");
        exit(EXIT_FAILURE);
    }
    return newnode;
}
void display(struct node* head){
    while(head!=NULL){
        printf("%c\t",head->data);
        head = head->next;
    }
    printf("\n");
}
struct node*InserttoQ(struct node* Qfront){
    char data;
    printf("Enter the element to insert : ");
    scanf(" %c",&data); // Add a space before %c to skip whitespace characters
    newnode= create_node(data);
    if(Qfront ==NULL){
        Qfront = newnode;
    }else{
        ptr=Qfront;
        while(ptr->next != NULL){
            ptr= ptr->next;
        }
        ptr->next = newnode;
    }
    printf("The elements in the Queue are :\n");
    display(Qfront);
    return Qfront;
}
void pushtoStack(struct node* Qfront, struct node* Speak){
    if(Qfront ==NULL){
        printf("The elements in Stack are : \n");
        display(Speak);
        return ;    
    }else{
        newnode = create_node(Qfront->data);
        if(Speak == NULL)
            Speak = newnode;
        else{
            newnode->next = Speak;
            Speak = newnode;
        }
        ptr = Qfront;
        Qfront = Qfront->next;
        free(ptr);
    }
    pushtoStack(Qfront,Speak);
}
int main(){
    printf("Enter 1 to enter to the Queue\nEnter 2 to reverse the Queue using Stack\nEnter 0 to exit\n");
    int a =1;
    while(a==1){
        printf("Enter your choice : ");
        scanf("%d",&a);
        switch(a){
            case 1 : Qfront = InserttoQ(Qfront);
            break;
            case 2 : pushtoStack(Qfront,Speak);
            break;
            case 0 : a=0;
            break;
            default: printf("Invaid number \n");
            break;
        }
    }
    return 0;
}
