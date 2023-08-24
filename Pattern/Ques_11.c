/* To print a pattern like:-
                                  1 
                                 A B 
                                3 3 3 
                               C D E F 
                              5 5 5 5 5 
 */

#include <stdio.h>
void main()
{
    int n, i, j, k;
    char c = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", c++);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}