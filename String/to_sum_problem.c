// To find the number of pairs who follow two sum

#include <stdio.h>
#include <string.h>

int two_sum(int arr[], int size, int target)
{
    int count = 0, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size; j++)
        {
            if ((arr[i] < target) && arr[j] < target)
            {
                if ((arr[i] + arr[j]) == target)
                    count++;
            }
        }
    }
    count = count/2;
    return count;
}

void main()
{
    int arr[20], target, i, size, pair;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    pair = two_sum(arr, size, target);
    printf("There are %d pairs whose two sum is %d", pair, target);
}