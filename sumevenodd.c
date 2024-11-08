#include <stdio.h>
int main()
{
    int n1=1,n3=n1,n2=100,es=0,os=0;
    printf("\n======================================================");
    printf("\nsum of even numbers are:");
    while(n1<=n2)
    {
        if(n1%2==0)
        {
            es=es+n1;
            n1=n1+1;
        }
        else
        {
            n1=n1+1;
            continue;
        }
    }
    printf("\n%d",es);
    printf("\n======================================================");
    printf("\nsum of odd numbers are:");
    while(n3<=n2)
    {
        if(n3%2!=0)
        {
            os=os+n3;
            n3=n3+1;
        }
        else
        {
            n3=n3+1;
            continue;
        }
    }
    printf("\n%d",os);

}

