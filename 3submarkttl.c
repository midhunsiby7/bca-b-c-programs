#include <stdio.h>
#include<conio.h>
int main()
{
    char name[20],sub1[20],sub2[20],sub3[20];
    float m1,m2,m3,total;
    printf("enter your name :");
    scanf("%s",name);
    printf("enter the first subject :");
    scanf("%s",sub1);
    printf("enter the mark of %s",sub1);
    scanf("%f",&m1);

    printf("enter the second subject :");
    scanf("%s",sub2);
    printf("enter the mark of %s",sub2);
    scanf("%f",&m2);

    printf("enter the third subject :");
    scanf("%s",sub3);
    printf("enter the mark of %s",sub3);
    scanf("%f",&m3);

    total=m1+m2+m3;
    printf("hello %s .\nyour total mark of the three subjects %s, %s & %s is %f",name,sub1,sub2,sub3,total);
}