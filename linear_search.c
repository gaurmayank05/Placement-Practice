#include <stdio.h>
void main()
{
    int linear_search(int[], int);
    int arr[50], size, i, r;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("\nEnter the elements of array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    r = linear_search(arr, size);
    if (r == -1)
    {
        printf("Searched item is not found.");
    }
    else
    {
        printf("Searched item is found at position %d", r + 1);
    }
}

int linear_search(int arr[], int size)
{
    int item, i;
    printf("Enter the searched item : ");
    scanf("%d", &item);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            return i;
        }
    }
    if (arr[i] != item)
    {
        return -1;
    }
}
