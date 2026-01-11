// Sort array with n elements using bubble sort.
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
    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Print sorted array
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}