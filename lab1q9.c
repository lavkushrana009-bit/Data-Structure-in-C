// Merge two arrays of different length.
#include <stdio.h>
int main()
{
    int i, j, n1, n2, a1[100], a2[100], merged[200];
    // Input number of elements for first array
    printf("Enter the number of elements in first array:");
    scanf("%d", &n1);
    // Input elements for first array
    printf("Enter the elements in first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    // Input number of elements for second array
    printf("Enter the number of elements in second array:");
    scanf("%d", &n2);
    // Input elements for second array
    printf("Enter the elements in second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    // Merging the two arrays
    for (i = 0; i < n1; i++)
    {
        merged[i] = a1[i];
    }
    for (j = 0; j < n2; j++)
    {
        merged[i + j] = a2[j];
    }
    // Print the merged array
    printf("The merged array is:\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf(" %d", merged[i]);
    }
    return 0;
}
