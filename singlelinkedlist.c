#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;
int len;



void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("enter node data:");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
      struct node* p;
      p = root;
      while(p->link!=NULL)
      {
          p = p->link;

      }
      p->link = temp;
    }

}

int lenght()
{
   int count = 0;
   struct node* temp;
   temp = root;
   while(temp!=NULL)
   {
       count++;
       temp = temp->link;
   }
   return count;
}
void display()
{
    struct node* temp;
    temp=root;

    if(temp==NULL)
    {
        printf("list is empty\n\n");

    }
    else
    {
       while(temp!=NULL)
       {
           printf("%d-->",temp->data);
           temp=temp->link;
       }
       printf("\n\n");
    }
}
void addatbegin(int data)
{
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));

    if (new_node==NULL)
    {
        printf("unable to allocate memory\n");

    }
    else
    {
        new_node->data=data;
        new_node->link=root;
        root=new_node;
    }

}
void addafter(void)
{
    struct node* temp, *p;
    int loc, len, i=1;
    printf("enter loc:");
    scanf("%d",&loc);
    len=lenght();
    if(loc>len)
    {
        printf("invalid location\n");
        printf("currently list is having %d nodes",len);

    }
    else
    {
        p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&temp->data);

        temp->link=p->link; // left side connection
        p->link=temp;  //Right side connection

    }


}

void delete()
{
    struct node* temp;
    int loc;

    printf("enter the loc to delete:");
    scanf("%d",&loc);

    if(loc>len)
    {
        printf("invalid location\n");
    }
    else if(loc==1)
    {
        temp=root;
        root= temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        struct node* p=root,*q;
        int i=1;
        while(i<loc-1)
        {
           p= p->link;
           i++;
        }
         q=p->link;
         p->link=q->link;
         q->link=NULL;
         free(q);
    }
}

void reverse()
{
    int i,j;
    struct node*p, *q;
    len=lenght();
    i=0;
    j=len-1;
    p=q=root;

    while(i<j)
    {
        int k=0,temp;

        while(k<j)
        {
            q= q->link;
            k++;
        }
        temp = p->data;
        p->data = q->data;
        q->data = temp;
        i++;
        j--;

        p=p->link;
        q=root;
    }
}

void middle()
{
    struct node* p, *q;
    int count=0;


    while(q!=NULL)
    {
        count++;

        if(q!=NULL && q->link->link!=NULL)
        {
            q = q->link->link;
            p = p->link;

        }
        else
            break;

    }
        if(count%2==0)
        {
            printf("middle element is: %d \n %d",p->data, p->link->data);

        }
        else
        {
            printf("%d",p->data);
        }
    }


void main()
{
    int ch;
    while(1)
    {
        printf("operations:\n");
        printf("1.Append\n");
        printf("2.Addatbegin\n");
        printf("3.Addatafter\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Reverse\n");
        printf("8.Quit\n");
        printf("9.Middle\n");

        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : append();
            break;
            case 2 : addatbegin(7);
            break;
            case 3 : addafter();
            break;
            case 4 :len= lenght();
                    printf("length of the list is: %d\n\n",len);
            break;
            case 5 : display();
            break;
            case 6 : delete();
            break;
            case 7: reverse();
            break;
            case 8: middle();
            break;
            case 9 : exit(1);
            default: printf("invalid input\n\n");
        }

    }
}
