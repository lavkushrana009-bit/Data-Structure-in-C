// Delete an element at the user given location in arrays
#include <stdio.h>
int main()
{
    int i, n, a[100], position;
    // Input number of elements
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    // Declare array of size n
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Input the position to be deleted
    printf("Enter the position to delete the element (0 to %d):", n - 1);
    scanf("%d", &position);
    // Check for valid position
    if (position < 0 || position >= n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the left to delete the element at the specified position
    for (i = position; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--; // Decrease the size of the array
    // Print the updated array
    printf("The updated array is:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}