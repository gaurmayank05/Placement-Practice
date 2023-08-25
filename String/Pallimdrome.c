// Write a program to check whether a String is either Pallimdrome or not

#include <stdio.h>
#include <string.h>

void main()
{
    char String[20];
    int len, i,flag = 0;
    printf("Enter String: ");
    gets(String);
    len = strlen(String);
    for (i = 0; i <= (len / 2); i++)
    {
        if(String[i] != String[len - i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("%s is not a Pallimdrome.",String);
    }
    else{
        printf("%s is a Pallimdrome.",String);
    }
}