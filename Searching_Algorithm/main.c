#include <stdio.h>
#include "search.h"

void printResult(int result, int target) {
    if (result == -1) {
        printf("Element %d not found in the array.\n", target);
    } else {
        printf("Element %d found at index %d.\n", target, result);
    }
}

int main() {
    // Array for linear and binary search
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    // Linear Search
    printf("Linear Search:\n");
    int result = linearSearch(arr, n, target);
    printResult(result, target);

    // Binary Search (array must be sorted)
    printf("\nBinary Search:\n");
    result = binarySearch(arr, 0, n - 1, target);
    printResult(result, target);

    return 0;
}
