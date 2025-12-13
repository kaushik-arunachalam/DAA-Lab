#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int i, j, temp;
    int a[6] = {5, 4, 10, 1, 6, 2};
    int n = 6;

    printf("Original array:\n");
    printArray(a, n);

    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("Sorted array:\n");
    printArray(a, n);

    return 0;
}
