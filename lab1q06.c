// Implement Linear search with nelements in a array using recursion.
#include <stdio.h>
int main()
{
    int arr[50], n, i, target, result;
    int linearSearch(int arr[], int n, int target)
    {
        if (n <= 0)
        {
            return -1; // Base case: not found
        }
        if (arr[n - 1] == target)
        {
            return n - 1; // Found at index n-1
        }
        return linearSearch(arr, n - 1, target); // Recursive call
    }
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    result = linearSearch(arr, n, target);
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