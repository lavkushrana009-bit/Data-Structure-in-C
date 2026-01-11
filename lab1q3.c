// Implement Selection Sort with n elements in array.
#include <stdio.h>
int main()
{
    int i, j, n, a[100], min_idx, temp;
    // Input number of elements
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    // Declare array of size n
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
    // Print the sorted elements of the array
    printf("The sorted elements in array are:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}