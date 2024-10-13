#include <stdio.h>
#include "search.h"

// Function to implement Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is smaller than mid, search the left half
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }

        // If the target is larger than mid, search the right half
        return binarySearch(arr, mid + 1, right, target);
    }

    return -1; // Target not found
}
