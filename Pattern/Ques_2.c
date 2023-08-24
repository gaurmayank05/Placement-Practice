/*      To print a Pattern like :-
                                    1 1 1 1
                                    2 2 2 2
                                    3 3 3 3
                                    4 4 4 4
 */

#include <stdio.h>

void main()
{
    int n, i, j;
    printf("Enter number of rows and column: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}