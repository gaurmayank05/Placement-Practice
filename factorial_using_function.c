#include <stdio.h>

void main()
{
    int n, res, factorial(int);
    printf("Enter number: ");
    scanf("%d", &n);
    res = factorial(n);
    printf("Factorial of %d = %d", n, res);
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
