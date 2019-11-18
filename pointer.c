#include<stdio.h>

int main()
{
    int a=5;

    int *b;
    b=&a;

    printf("a=%d\n",a);
    printf("a=%d\n",*(&a));
        printf("a=%d\n",*b);
            printf("addr of a=%u\n",&a);
        printf("addr of a=%d", b);
            printf("addr of b=%u\n",&b);
            printf ("value of b = address of a = %u", b);

            return 0;
}
