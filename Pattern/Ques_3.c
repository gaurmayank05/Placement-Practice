/*      To print a Pattern like :-
                                    1 2 3 4
                                    1 2 3 4
                                    1 2 3 4
                                    1 2 3 4
 */

#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        for(j = 1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}