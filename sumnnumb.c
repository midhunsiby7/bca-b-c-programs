#include<stdio.h>
int main()
{
    int s=0,c=0,ct,n;
    printf("how much number do you want to count :");
    scanf("%d",&ct);
    while (c<=ct)
    {
        printf("enter a number :");
        scanf("%d",&n);
        c=c+1;
        s=s+n;
    }
    printf("limit you entered reached :");
    printf("\nthe sum of the numbers you entered is %d",s);
}