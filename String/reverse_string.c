// Write a program to reverse a String.


#include <stdio.h>
#include <string.h>

void main()
{
    char String[20], ch_1;
    int i,len;
    printf("Enter a String: ");
    gets(String);
    len = strlen(String);
    for (i = 0; i < len/2; i++)
    {
        ch_1 = String[i];
        String[i] = String[len-1-i];
         String[len-1-i] = ch_1;
    }
    printf("After Reverse: ");
    puts(String);
}