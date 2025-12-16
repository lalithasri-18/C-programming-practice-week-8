#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid;
    int c = 0, index;

    printf("Enter no. of elements : ");
    scanf("%d", &n);

    printf("Enter sorted elements in ascending order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            c = 1;
            index = mid;
            break;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (c == 1)
        printf("Element found at %d position", index);
    else
        printf("Element not found");

    return 0;
}

