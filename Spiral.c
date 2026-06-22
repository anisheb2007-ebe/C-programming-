//Spiral matrix
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {

        // Top row
        for (int i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // Bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                a[bottom][i] = num++;
            bottom--;
        }

        // Left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }

    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    return 0;
}
