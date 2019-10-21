#include<stdio.h>
struct rect
{
    int l,b,a;
};
int main()
{
    struct rect r;
    struct rect *p;
    p=&r;
    printf("enter l&b:");
    scanf("%d%d",&r.l,&r.b);
    p->a=p->l*p->b;
    printf("%d",p->a);
}
