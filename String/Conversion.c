// Convert a String from Lower to Upper Case

#include <stdio.h>
#include <string.h>

void main()
{
    char String_1[20], String_2[20];
    int i, len, lower, upper;
    printf("Enter a String: ");
    gets(String_1);
    len = strlen(String_1);
    for (i = 0; i < len; i++)
    {
        lower = String_1[i];
        upper = lower - 32;
        String_2[i] = upper;
    }
    puts(String_2);
}