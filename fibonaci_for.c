#include <stdio.h>
int main() {
    int n;
    printf("enter a limit :");
    scanf("%d",&n);
    int num1 = 0, num2 = 1;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", num1);
        int nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
}
