#include <stdio.h>
#include<stdlib.h>
//Mukabbir//
struct node{
    char data;
    struct node *next;
    struct node *prev;
};
struct node *head,*newnode;
void create(){
struct node *last;
int choice=1;
while(choice){

newnode= (struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%s",&newnode->data);
newnode->next=0;
newnode->prev=0;

if(head==0){
    head=last=newnode;
}
else{
    newnode->prev=last;
    newnode->next=0;
    last->next=newnode;
    last=newnode;
}
printf("Do you want to contine? **1 for Continue 0 for exit**\n");
scanf("%d",&choice);
}

last= head;
printf("Data in the linked list are\n");
while(last!=0)
{
	printf( " %c\n",last->data);
	last= last->next;

}
}
void deletebeg()
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
    deletebeg();
}

