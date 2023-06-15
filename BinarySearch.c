#include <stdio.h>

int binarySearch(int arr[], int k, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return mid;

        if (arr[mid] < k)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int result = binarySearch(arr, k, 0, n - 1);
    if (result == -1)
        printf("Element Not found");
    else
        printf("Element is found at index %d", result);
    return 0;
}


// #include <stdio.h>
// void main()
// {
//     int a[10], i, k, beg = 0, end = 10, mid;
//     printf("Enter the 10 element:");
//     for (i = 0; i < 10; i++)
//     {
//         printf("\nElement no %d :", i + 1);
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the no to be searched :");
//     scanf(" %d ", &k);
//     mid = (beg + end) / 2;
//     while (beg <= end)
//     {
//         if (k < a[mid])
//         {
//             end = mid - 1;
//         }
//         else
//             beg = mid + 1;
//         mid = (beg + end) / 2;
//     }
//     if (a[mid] == k)
//     {
//         printf("Number is found at position %d", k);
//     }
//     else
//     {
//         if (beg > end)
//         {
//             printf("Number not found");
//         }
//     }
// }