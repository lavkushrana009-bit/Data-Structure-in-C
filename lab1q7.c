// Insert an element at the user given location in arrays
#include <stdio.h>
int main()
{
    int i, n, a[100], element, position;
    // Input number of elements
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    // Declare array of size n
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Input the element to be inserted and the position
    printf("Enter the element to be inserted:");
    scanf("%d", &element);
    printf("Enter the position to insert the element (0 to %d):", n);
    scanf("%d", &position);
    // Check for valid position
    if (position < 0 || position > n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }
    // Insert the new element at the specified position
    a[position] = element;
    n++; // Increase the size of the array
    // Print the updated array
    printf("The updated array is:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}