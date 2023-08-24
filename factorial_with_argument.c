#include <stdio.h>

void factorial(int n)
{
    int res = 1, i;
    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }
    printf("factorial of %d = %d", n, res);
}

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    factorial(n);
}