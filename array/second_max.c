// To find the second maximum number in an array.

#include <stdio.h>

void main()
{
    int arr[20], size, max, s_max,i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter element of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    s_max = arr[0];
    for (i = 0; i < size; i++)
    {
        if ((arr[i] > s_max) && arr[i] != max)
        {
            s_max = arr[i];
        }
    }
    printf("%d is second maximum.", s_max);
}