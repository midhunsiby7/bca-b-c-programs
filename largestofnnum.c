#include<stdio.h>
int main()
{
    int n1,n2,l,c=1;
    printf("enter limit :");
    scanf("%d",&l);
    printf("enter firsst number :");
    scanf("%d",&n1);
    while (c<l)
    {
        printf("enter another number :");
        scanf("%d",&n2);
        if(n1>n2)
        {
            c=c+1;
            continue;
        }
        else if(n1<n2)
        {
            n1=n2;
            c=c+1;
            continue;
        }
        else
        {
            printf("do not enter same number :\n");
            c=c+1;
        }
    }
    printf("the largest number among the numbers is %d",n1);
}