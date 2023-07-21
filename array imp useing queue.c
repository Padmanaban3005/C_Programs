#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front=-1,rear=-1;
void enqueue();
void display();
int main()
{
    int choice;

while(1){
    printf("\n 1.Enqueue");
    printf("\n 2.Dequeue");
    printf("\n 3.Display");
     printf("\n Enter your choice: ");
     scanf("%d",&choice);
        switch(choice){
    case 1:
         enqueue();
        break;
    case 2:
        dequeue();
       break;
    case 3:
        display();
        break;
        break;
         default:
        printf("Invalid choice");
        break;
        }

}
return 0;
}
void enqueue()
{
    int value;
    for(int i=0;i<size;i++){
    scanf("%d",&value);
    if(rear==size-1){
        printf("Queue is Full");
    }
   else if(front==-1 && rear==-1){
          front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear]=value;
}
}
void dequeue()
{
    int value;
    if (front == -1 || front > rear)
    {
        printf("UNDERFLOW");
    }
    else
    {
        value = queue[front];
        if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }
        else
        {
            front = front + 1;
        }
    }
}
void display()
{
    int i;
    if(rear == -1)
    {
        printf("Empty queue");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
