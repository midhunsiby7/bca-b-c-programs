#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
        s=s*10;
    }
    s=s/10;
    while(s!=0)
    {
        r=s%10;
        if(r==0)
        {
            printf("zero ");
        }
        else if(r==1)
        {
            printf("one ");
        }
        else if(r==2)
        {
            printf("two ");
        }
        else if(r==3)
        {
            printf("three ");
        }
        else if(r==4)
        {
            printf("four ");
        }
        else if(r==5)
        {
            printf("five ");
        }
        else if(r==6)
        {
            printf("six ");
        }
        else if(r==7)
        {
            printf("seven ");
        }
        else if(r==8)
        {
            printf("eight ");
        }
        else if(r==9)
        {
            printf("nine ");
        }
        s=s/10;
    }
}    
