#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*temp,*newnode,*pos;
void create();
void display();
void insertatfront();
void insertatmiddle();
void deleteatmiddle();
int main(){
    int choice;

    while(1){
        printf("\n 1.create");
        printf("\n 2.display");
        printf("\n 3.insertatfront");
        printf("\n 4.insertatmiddle");
        printf("\n Enter your choice: ");
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
        insertatmiddle();
        break;
    case 5:
        deleteatmiddle();
        break;
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
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;

        temp=newnode;
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
    head=newnode;
    temp=newnode;
}

void insertatmiddle()
{
    int i,pos;
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    for(i=0;i<pos-1;i++)
    {
        temp=temp->next;
        temp->next=newnode;
    }
}
deleteatmiddle()
{
    int i;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",& pos);
    temp=head;
    for(i=0;i<pos;i++){
        temp=temp->next;
        temp->next=temp->next->next;
        free(temp);
}
}

