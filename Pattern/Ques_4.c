/*   To print a pattern like :-
                                    a a a a a
                                    B B B B B
                                    c c c c c
                                    D D D D D
                                    e e e e e

                                ASCII value for lowercase  = 97 to 122
                                ASCII value for lowercase  = 65 to 90
 */
#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", 64 + i);
            }
            else
            {
                printf("%c ", 96 + i);
            }
        }
        printf("\n");
    }
}