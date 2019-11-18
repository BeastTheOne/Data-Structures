#include<stdio.h>

int summation(int arr[])
{
    int sum=0,i;

    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[5]={0,1,2,3,4};

    int sum=summation(arr);

    printf("%d",sum);
}
