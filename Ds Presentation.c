#include <stdio.h>
#include<stdlib.h>
//Mukabbir
struct node{
    char data;
    struct node *next;
    struct node *prev;
};
struct node *head,*newnode;
void create(){
struct node *temp;
int choice;
while(choice){

newnode= (struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%s",&newnode->data);
newnode->next=0;
newnode->prev=0;

if(head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
}
printf("do you want to contine? 0 for Exit 1 for Continiue\n");
scanf("%d",&choice);
}

temp= head;
printf("items in linked list are:");
while(temp!=0)
{
	printf( " %c\n",temp->data);
	temp= temp->next;

}
}
void deletebe()
{
    struct node*temp;
    if(head==0){
        printf("LIST is EMPTY!");
    }
    else{
        temp=head;
        head = head->next;
        head->prev =0;
        free(temp);
    }

temp= head;
printf("After Deleting from the Begain\n");
while(temp!=0)
{
	printf( " %c\n",temp->data);
	temp= temp->next;

}
}
void main(){
    create();
    deletebe();
}


