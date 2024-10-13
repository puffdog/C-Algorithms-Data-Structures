#include <stdio.h>
#include "sort.h"

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Unsorted array (Bubble Sort): \n");
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    printf("Sorted array (Bubble Sort): \n");
    printArray(arr1, n1);

    int arr2[] = {38, 27, 43, 3, 9, 82, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Unsorted array (Merge Sort): \n");
    printArray(arr2, n2);
    mergeSort(arr2, 0, n2 - 1);
    printf("Sorted array (Merge Sort): \n");
    printArray(arr2, n2);

    int arr3[] = {10, 7, 8, 9, 1, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Unsorted array (Quick Sort): \n");
    printArray(arr3, n3);
    quickSort(arr3, 0, n3 - 1);
    printf("Sorted array (Quick Sort): \n");
    printArray(arr3, n3);

    return 0;
}
