#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *link;
};

struct node * root;

void createCList()
{
    int choice;
     struct node * newnode,*temp;

     root=NULL;
     while(choice)
     {
     newnode=(struct node*)malloc(sizeof(struct node));

     printf("enter the data:");

     scanf("%d",&newnode->data);

     newnode->link=NULL;

     if (root==NULL)
     {
         root=newnode=temp;
     }

     else
     {
         temp->link=newnode;
         temp=newnode;
     }

     temp->link=root;

     printf("1 for continue and 0 for exit:");
     scanf("%d",&choice);
     }
}

void display()
{
    struct node *temp;

    if(root==NULL)
    {
        printf("empty\n");
    }

    else()
    {
        temp=root;
        while(temp->link!=root)
        {
            printf("%d-->",temp->data);
            temp=temp->link;
        }
        printf("%d",temp->data);
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("operations:\n");

        printf("1. Create Circular linked list:\n");
        printf("2. Display\n");

        printf("enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: createCList();
            break;

            case 2: display();
            break;

            case 3 : exit(1);
            default: printf("invalid input\n\n");
        }
    }
}
