/*   To print a pattern like :-
                                    * * * * *
                                    * A B C *
                                    * D E F *
                                    * G H I *
                                    * * * * *
 */
#include <stdio.h>

void main()
{
    int n, i, j;
    char ch = 'A';
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
	for (j = 1; j <= n; j++)
	{
	    if(i==1 || j == 1 || i == n || j == n)
	    {
		printf("* ");
	    }
	    else{
		printf("%c ",ch++);
	    }
	}
	printf("\n");
    }
}