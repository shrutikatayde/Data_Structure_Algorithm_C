#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[100], i, element, no;
    printf("\nEnter the no of Elements:");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        printf("\n Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &element);
    for (i = 0; i < no; i++)
    {
        if (arr[i] == element)
        {
            printf("Element found at position %d", i + 1);
            exit(1);
        }
    }
    printf("\nElement not found");
}