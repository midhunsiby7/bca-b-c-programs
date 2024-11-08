#include<stdio.h>
int main()
{
    int n,d;
    char c[100]=("the reverse of the number is "),ca[10];
    printf("enter a number :");
    scanf("%d",&n);
    while (n!=0)
    {
        d=n%10;
        n=n/10;
        sprintf(ca,"%d",d);
        sprintf(c,"%s%s",c,ca);
    }
    printf("%s",c);
    

}


