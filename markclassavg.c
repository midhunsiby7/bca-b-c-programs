#include<stdio.h>
int main()
{
    char class[20];
    float m,avg,m1;
    int c=0,n;
    printf("enter the class :");
    scanf("%s",class);
    printf("enter numer of students :");
    scanf("%d",&n);
    while(c<n)
    {
        printf("enter a student mark :");
        scanf("%f",&m);
        c=c+1;
        m1=m1+m;
    }
    avg=m1/n;
    printf("the average mark of the class %s is %f",class,avg);
}