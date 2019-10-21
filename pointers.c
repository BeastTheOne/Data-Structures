#include<stdio.h>
int main()
{
    float p=6,r=2,t=1,si;
    float *p1,*p2,*p3,*p4;
    p1=&p;
    p2=&r;
    p3=&t;
    p4=&si;
    *p4=(*p1+*p2+*p3)/100;
    printf("%f\n",p4);
    printf("%f",*p4);
}
