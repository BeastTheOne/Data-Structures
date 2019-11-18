#include<stdio.h>
#include<stdlib.h>
{
	int data;
	struct node *left;
	struct node *right;
};

struct node * root=NULL;
int len;

void append()
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("enter node data:\n" );
	scanf("%d",&temp->data);

	temp->left=NULL;
	temp->right=NULL;

	if (root==NULL)
	{
		root=temp;
	}

	else
	{
		struct node *p;

		 p=root;

		 while(p->right!=NULL)
		 {
		 	p=p->right;

		 }

		 p->right=temp;

		 temp->left=p;
	}

}

void addatbegin(int data)
{
	struct node* temp;

	temp=(struct node*)malloc(sizeof(struct node));

	printf("enter node data");
	scanf("%d",&temp->data);

	temp->right=NULL;
	temp->left=NULL;

	if(root==NULL)
	{
		root=temp;
	}

	else
	{
		temp->right=root;//right connection
		root->left=temp;

		root=temp;//left connection


	}


}

int lenght()
{
	struct node* temp;
	int count=0;
	temp=root;

	while(temp!=NULL)
	{
		count++;
		temp=temp->right;


	}
	return count;


}


void addafter()
{
    struct node * temp,*p;
    int i=1,len,loc;

    printf("enter the location:");
    scanf("%d",&loc);

    len=lenght();

    if(loc>len)
    {
        printf("invalid location");

    }

    else
    {
        temp=(struct node*)malloc(sizeof(struct node));  /* creation of a node to add */

        printf("enter the node data:");
        scanf("%d",&temp->data);

        temp->left=NULL;
        temp->right=NULL;

        p=root;

        while(i<loc)
        {
            p=p->right;
            i++;
        }

        temp->right=p->right;   /*left connections */
        p->right->left=temp;

        temp->left=p;  /*right connections */
        p->right=temp;



    }





}


void display()
{
	struct node* temp;
	temp=root;

	if (temp==NULL)
	{
		printf("list is empty\n\n" );
	}

	else
	{

		while(temp!=NULL)
		{
			printf("%d-->",temp->data );

			temp=temp->right;

		}

		printf("\n\n" );
	}

}

void addatend()
{
    struct node *temp, *p;

    int i=1, len;

    temp=(struct node*)malloc(sizeof(struct node));  /* creation of a node to add */

        printf("enter the node data:");
        scanf("%d",&temp->data);

        temp->left=NULL;
        temp->right=NULL;

        p=root;


    len=lenght();

    while(i!=len)
    {
        p=p->right;
        i++;
    }
    p->right=temp;
    temp->left=p;

    temp->right=NULL;

}

void delete()
{
    struct node * temp;
    int loc;

    printf("enter the location to delete: ");
    scanf("%d",&loc);

    if(loc>lenght())
    {
        printf("invalid location!");

    }

    else if(loc==1)
    {
        temp=root;
        root=temp->right;


        temp->right=NULL;

        free(temp);

         printf("\nNode Deleted\n");
    }

    else
    {
        struct node* p, *q;
        int i=1;

        while(i<loc-1)
        {
            p=p->right;
            i++;
        }
        q=p->right;

        p->right=q->right; /* disconnecting right connection */
        q->right->left=q->left;

        q->right=NULL;
        q->left=NULL;

        free(q);

         printf("\nNode Deleted\n");



    }



}

void reverse()
{

}

void middle()
{


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
        printf("10. addatend\n");

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
            case 8:  exit(1);
            break;
            case 9 : middle();
            break;
            case 10: addatend();
            break;
            default: printf("invalid input\n\n");
        }

    }
}
