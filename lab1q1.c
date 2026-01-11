// Traverse the array with n elements
#include <stdio.h>
int main()
{
    int i, n, a[100];
    // Input number of elements
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    // Declare array of size n
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Print the elements of the array
    printf("The elements in array are:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}