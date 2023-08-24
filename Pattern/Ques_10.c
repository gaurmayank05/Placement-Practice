/* To print a pattern like:-
                                  1 
                                 2 2 
                                3 3 3 
                               4 4 4 4 
 */


#include <stdio.h>

void main()
{
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}