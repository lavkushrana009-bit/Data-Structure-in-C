// Sort the array elements of size n using Quick sort
#include <stdio.h>
int main()
{
    int i, j, n, a[100], temp;
    // Input number of elements
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    // Declare array of size n
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Quick Sort Algorithm
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                // Swap a[i] and a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // Print the sorted elements of the array
    printf("The sorted elements in array are:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}