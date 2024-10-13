#include <stdio.h>
#include "search.h"

// Function to implement Linear Search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}
