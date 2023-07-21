#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*head,*temp,*newnode,*tail;

void create();
void display();
void inseratfront();
void insertatend();
void insertatmiddle();
void deleteatfront();
void deleteatend();
void deleteatmiddle();

int main(){
int choice;

while(1){
    printf("\n 1.create: ");
    printf("\n 2.display: ");
    printf("\n 3.insertatfront: ");
    printf("\n 4.insertatend: ");
    printf("\n 5.insertatmiddle: ");
    printf("\n 6.deleteatfront: ");
    printf("\n 7.deleteatend: ");
    printf("\n 8.deleteatmiddle: ");
    printf("\n enter your choice: ");
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
        break;
    case 6:
        deleteatfront();
        break;
    case 7:
        deleteatend();
        break;
    case 8:
        deleteatmiddle();
        break;
        }

    }
    return 0;
}

void create(){

int n,i;
printf("enter the size: ");
scanf("%d",&n);
for(i=0;i<n;i++)
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

void insertatfront()
{
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element to insert front:");
    scanf("%d", &newnode->data);
    newnode->next=head;
    tail->next=newnode;
    head=newnode;
}

void insertatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nInsert the end element: ");
    int value;
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->next=head;
    tail=newnode;

}

void insertatmiddle()
{
    int pos,i;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nInsert the middle element: ");
    scanf("%d",&newnode->data);
    printf("Position= ");
    scanf("%d",&pos);
    temp=head;
    for(i=0; i<pos-1; i++)
      {
       temp=temp->next;
       newnode->next=temp->next;
       temp->next=newnode;
      }
 }

 void deleteatfront()
 {
     temp=head;
     head=head->next;
     temp=tail;
     tail->next=head;
 }

 void deleteatend()
 {
     temp=head;
     while(temp->next!=tail)
       {
         temp=temp->next;
       }
     tail=temp;
     tail->next=head;
 }

 void deleteatmiddle()
 {
     int pos,i;
     printf("Position= ");
     scanf("%d",&pos);
     temp=head;
     for(i=0; i<pos-1; i++)
      {
        temp=temp->next;
        temp->next=temp->next->next;
      }
 }


