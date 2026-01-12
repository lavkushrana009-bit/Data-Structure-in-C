// Implement binary search with nelements in a array using recursion.
#include <stdio.h>
int main()
{
    int arr[50], n, i, target, result;
    int binarySearch(int arr[], int left, int right, int target)
    {
        if (left > right)
        {
            return -1; // Base case: not found
        }
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid; // Found at index mid
        }
        else if (arr[mid] > target)
        {
            return binarySearch(arr, left, mid - 1, target); // Search in left half
        }
        else
        {
            return binarySearch(arr, mid + 1, right, target); // Search in right half
        }
    }
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
    {
        printf("Element found at index: %d\n", result);
    }
    else
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}
