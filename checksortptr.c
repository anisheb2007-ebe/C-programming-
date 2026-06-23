#include <stdio.h>

int isSorted(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            return 0;   // Not sorted
        }
    }

    return 1;   // Sorted
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size))
        printf("Array is sorted.\n");
    else
        printf("Array is not sorted.\n");

    return 0;
}
