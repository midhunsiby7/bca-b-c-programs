#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],y[20]="ronaldo";
    printf("enter your name :");
    scanf("%s",name);
    if(strcmp(name,y)==0)
    {
        printf("good morning %s",name);
    }
    else
    {
        printf("invalid name");
    }

}