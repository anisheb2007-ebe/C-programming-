#include <stdio.h>

void display(int *ptr, int size)
{
    int i;

    printf("Array elements are:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);   // arr is passed as a pointer

    return 0;
}
