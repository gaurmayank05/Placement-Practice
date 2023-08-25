// Capitalize the kth occurence of a String without using loop

#include <stdio.h>
#include <string.h>

void main()
{
    char String_1[20];
    int i, length, position;
    printf("Enter a String: ");
    gets(String_1);
    length = strlen(String_1);                              // Calculating length of a String
    printf("Enter which character you want to convert: ");
    scanf("%d", &position);
    String_1[position-1] = String_1[position-1] -32;       // Converting the lower case character into
    puts(String_1);                                        // upper case
}