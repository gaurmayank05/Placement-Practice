#include <stdio.h>

void check_prime(int);

void main()
{
    int num;
    printf("Enter num : ");
    scanf("%d", &num);
    check_prime(num);
}

void check_prime(int num)
{
    int i, flag = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if ((num % i) == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
}