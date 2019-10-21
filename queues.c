#include<stdio.h>
#define MAX 100
int qarray[MAX];
int rear=-1;
int front=-1;
int main()
{
     int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }
}

void insert()
{
    int data;
    if(rear==MAX-1)
    {
        printf("queue is overflow");
        exit(1);
    }
    else if(front==-1)
    {
       printf("insert an element in queue:");
       scanf("%d",&data);
       rear=rear+1;
       qarray[MAX]=data;
    }
}
int dequeue()
{
    if(front==-1||rear<front)
    {
        printf("queue is underflow");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", qarray[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("overflow");
    }
    else
    {
        printf("queue is\n:");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",qarray[i]);
        }
    }
}
