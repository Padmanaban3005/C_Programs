#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*head,*temp,*newnode,*prev,*next,*current;
void create();
void reerse();
void display();

int main(){
int choice;

while(1){
    printf("\n 1.create: ");
    printf("\n 2.display: ");
    printf("\n 3.reverse: ");
     scanf("%d",&choice);
        switch(choice){
    case 1:
         create();
        break;
    case 2:
        display();
        break;
    case 3:
        reverse();
        break;

    }
    return 0;
}

void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",& newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        temp->next=head;
    }
void reverse()
{
    int *tail;
    do{
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
        while(head!=tail){
            head=prev;
        }
}

void display()
{
temp=head;
while(temp->next!=head)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
}


