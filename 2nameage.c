#include <stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int age;
    printf("enter your name :");
    scanf("%s",name);
    printf("enter your age :");
    scanf("%d",&age);
    printf("hello %s goodmorning.\nyour age is %d",name,age);
}