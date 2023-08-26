// Write a program to reverse a string after a specific position

#include <stdio.h>

void main()
{
    int arr[20], size, i, position, temp, mid,end;
    printf("Enter the size: ");
    scanf("%d", &size);
    end = size - 1;
    printf("Enter array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &position);
    for (i = position; i <= end; i++)
    {
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}