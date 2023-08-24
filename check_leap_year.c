// To check whether a year is " Leap Year " or not.

#include <stdio.h>

void check_leap(int);
void main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    check_leap(year);
}

void check_leap(int year)
{
    if (year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}