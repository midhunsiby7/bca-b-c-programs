#include <stdio.h>
int main()
{
    int n1,n3=n1,n2;
    printf("=====================================================");
    printf("\nenter the starting number :");
    scanf("%d",&n1);
    printf("enter finishing number :");
    scanf("%d",&n2);
    printf("\n======================================================");
    printf("\neven numbers are");
    while(n1<=n2)
    {
        if(n1%2==0)
        {
            printf("\n\t|\t%d\t|",n1);
            n1=n1+1;
        }
        else
        {
            n1=n1+1;
            continue;
        }
    }
    printf("\n======================================================");
    printf("\nodd numbers are");
    while(n3<=n2)
    {
        if(n3%2!=0)
        {
            printf("\n\t|\t%d\t|",n3);
            n3=n3+1;
        }
        else
        {
            n3=n3+1;
            continue;
        }
    }
}

