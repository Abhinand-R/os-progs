#include<stdio.h>
#include<stdlib.h>
void sort();
void Dequeue();
void Enqueue();
void Display();

struct queue
{
    int data;
    int priority;
};
struct queue q[30];
int n,front=-1,rear=-1;

void Enqueue()
{
    int item,pr;
    if(rear==n-1)
        printf("Queue Overflow");
    else
    {
        printf("Enter the item : ");
        scanf("%d",&item);
        printf("Enter its priority : ");
        scanf("%d",&pr);
        if(rear==-1)
            front=rear=0;
        else
            rear++;
        q[rear].data=item;
        q[rear].priority=pr;

    }
}
void Dequeue()
{
    sort();
    Display();
    if(front==-1)
        printf("Queue Underflow!!!");
    else
    {

        int item=q[front].data;
        if(front==rear)
            front=rear=-1;
        else
            front++;
        printf("\n%d Deleted",item);
    }

}
void sort()
{
    int i,j;
    for(i=front;i<rear+1;i++)
    {
        for(j=front;j<rear-i;j++)
        {
            if(q[j].priority>q[j+1].priority)
            {
                struct queue temp=q[j];
                q[j]=q[j+1];
                q[j+1]=temp;
            }
        }
    }
}
void Display()
{
    if(front==-1)
        printf("Nothing to display!!!");
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",q[i].data);
        }
        printf("\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",q[i].priority);
        }
    }
}

void main()
{
    int ch;
    printf("Enter the size of the priority queue : ");
    scanf("%d",&n);
    while(1)
    {
        printf("Enter the choice : \n1.Enqueue\n2.Dequeue\n3.display\n4.exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : Enqueue();
                     break;
            case 2 : Dequeue();
                     break;
            case 3 : Display();
                     break;
            case 4 : exit(0);
                     break;
            default : printf("Wrong choice!!!");
                      break;

        }

    }
}
