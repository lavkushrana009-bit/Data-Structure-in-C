// Implement Insertion Sort with n elements in array.
#include <stdio.h>
int main()
{
    int i, j, n, a[100], key;
    // Input number of elements
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    // Declare array of size n
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Insertion Sort Algorithm
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        // Move elements of a[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    // Print the sorted elements of the array
    printf("The sorted elements in array are:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}