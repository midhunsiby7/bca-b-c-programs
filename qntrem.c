#include <stdio.h>
int main()
{
    int n1,n2,r,q;
    printf("=====================================================");
    printf("\nenter the firstnumber :");
    scanf("%d",&n1);
    printf("enter second number which is greater than zero and less than %d :",n1);
    scanf("%d",&n2);
    if(n1>n2&&n2>0)
    {
        q=n1/n2;
        r=n1%n2;
        printf("the quiotient of the number %d divided by %d is %d",n1,n2,q);
        printf("\nthe reminder of the number %d divided by %d is %d",n1,n2,r);
    }
    else if(n2<=0)
    {
        printf("the entered number %d is less than or equal to zero",n2);
    }
    else
    {
        printf("the entered number %d is greater than %d",n2,n1);
    }
    printf("\n========================================================");
}