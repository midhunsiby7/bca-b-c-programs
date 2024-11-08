#include<stdio.h>
int main()
{
    int i=1;
    char names[10][50];
    int marks[10];
    while(i<=10)
    {
        printf("enter student %d name :",i);
        scanf("%s",names[i-1]);
        printf("enter student %d marks :",i);
        scanf("%d",&marks[i-1]);
        i++;
    }
    printf("\nstudent information :\n");
    i=1;
    while(i<=10)
    {
        printf("student %d:\n",i);
        printf("name: %s\n",names[i-1]);
        printf("marks: %d\n\n",marks[i-1]);
        i++;
    }
}