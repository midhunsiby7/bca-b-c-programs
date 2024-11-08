#include<stdio.h>
int main()
{
    int n,r,s=0,t;
    printf("enter a number :");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s+=(r*r*r);
        n=n/10;
    }
    if(s==t)
    {
        printf("the number %d is an amstrong",t);
    }
    else{
        printf("the number %d is not an amstrong",t);
    }
}