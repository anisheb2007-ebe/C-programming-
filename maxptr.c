#include <stdio.h>

int largest(int *arr, int size)
{
    int max = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }

    return max;
}

int main()
{
    int arr[] = {12, 45, 7, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Largest element = %d\n", largest(arr, size));

    return 0;
}
