// Capitalize the kth occurence of a String

#include <stdio.h>
#include <string.h>

void main()
{
    char String_1[20], String_2[20];
    int i, length, lower, upper, position;
    printf("Enter a String: ");
    gets(String_1);
    length = strlen(String_1); // Calculating length of a String
    printf("Enter which character you want to convert: ");
    scanf("%d", &position);
    for (i = 0; i < length; i++)
    {
        if (i == position - 1)
        {
            lower = String_1[i]; // Storing the ASCII value of character
            upper = lower - 32;  // conversion of lower to upper
            String_2[i] = upper; // Storing character into another String
        }
        else
        {
            String_2[i] = String_1[i];
        }
    }
    puts(String_2);
}

/*
        string_1[position-1] = string_1[position-1] -32;
 */