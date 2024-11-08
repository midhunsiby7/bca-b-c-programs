#include<stdio.h>
int main()
{
    int num,n,sum=0,d;
    printf("enter a number :");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    printf("sum of the digits of %d is %d",n,sum);
}