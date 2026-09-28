#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int low = 0;
    int high = 6;
    int key;
    int mid;

    printf("Enter the Number to search");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Element not found");
    return 0;
}