#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*head,*temp,*newnode;
void create();
void display();
void inseratfront();
void insertatend();
void insertatmiddle();

int main(){
int choice;

while(1){
    printf("\n 1.create: ");
    printf("\n 2.display: ");
    printf("\n 3.insertatfront: ");
    printf("\n 4.insertatend: ");
    printf("\n enter your choice: ");
    printf("\n 5.inseratmiddle: ");
     scanf("%d",&choice);
        switch(choice){
    case 1:
         create();
        break;
    case 2:
        display();
        break;
    case 3:
        insertatfront();
        break;
    case 4:
        insertatend();
        break;
    case 5:
        insertatmiddle();
        break
        }

    }
    return 0;
}

void create(){

int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",& newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
    }
}
}

void display()
{
temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
}

void insertatfront()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insertatend()
{
     newnode=(struct node*)malloc(sizeof(struct node));
     int value;
    scanf("%d",&newnode->data);
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
}

void insertatmiddle()
{

}




