#include <stdio.h>

void countEvenOdd(int *arr, int size, int *even, int *odd)
{
    *even = 0;
    *odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main()
{
    int arr[] = {10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even, odd;

    countEvenOdd(arr, size, &even, &odd);

    printf("Number of Even Elements = %d\n", even);
    printf("Number of Odd Elements  = %d\n", odd);

    return 0;
}
