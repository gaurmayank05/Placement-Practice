/*  To print a Pattern like :-
                                5 4 3 2 1
                                5 4 3 2
                                5 4 3
                                5 4
                                5
 */

#include <stdio.h>

void main()
{
    int num, i, j , value;
    printf("Enter number of column: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i--)
    {
        for(j=num;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}