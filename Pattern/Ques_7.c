/*  To print a Pattern like :-
                                1 2 3 4 5
                                1 2 3 4
                                1 2 3
                                1 2
                                1
 */

#include <stdio.h>

void main()
{
    int column, i, j;
    printf("Enter number of column: ");
    scanf("%d", &column);
    for (i = column; i >= 1; i--)
    {
        for (j = 1; j <= i ; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}