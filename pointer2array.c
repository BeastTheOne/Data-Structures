#include<stdio.h>
int main()
{
    void accessndmodify(int *p,int n);
    int a[100],n,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    accessndmodify(&a[0],n);
    printf("after calling:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void accessndmodify(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        //*(p+i)=50;
        printf("%d\n",*(p+i));
    }
}
