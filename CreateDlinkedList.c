#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * right;
    struct node * left;
};
struct node * root;

void create(int item)
{
    struct node * ptr=(struct node *)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("\nOverflow\n");

    }
    else
    {

        if(root==NULL)
        {
            ptr->right=NULL;
            ptr->left=NULL;
            ptr->data=item;
            root=ptr;
        }

        else
        {
            ptr->data=item;
            ptr->left=NULL;
            ptr->right=root;
            root->left=ptr;
            root=ptr;
        }
    }
}

int main()
{
    int item;

    printf("\nEnter the item\n");
    scanf("%d",&item);

    create(item);
}
