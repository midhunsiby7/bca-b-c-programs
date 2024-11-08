#include<stdio.h>
#include<string.h>
int main()
{
    int n1,sqr,n2=10;
    char ch[10];
    printf("enter a single digit number :");
    scanf("%d",&n1);
    if (n2-n1>=1)
    {
        while(n2==10)
        {
            sqr=n1*n1;
            n1=sqr;
            printf("the square is %d",n1);
            printf("\ndo you want to continue: y or n  :");
            scanf("%s",ch);
            if(strcmp(ch, "y") == 0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }
}