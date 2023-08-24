#include <stdio.h>

void main()
{
    int num, i;
    int fibonacci(int);
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}
