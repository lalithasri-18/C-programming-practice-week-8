#include <stdio.h>

int main()
{
    int a[100], n, i, x, c = 0;

    printf("Enter no. of elements : ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element that you want to search : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            printf("The element is found at %d position ", i);
            c = 1;
            break;
        }
    }

    if (c == 0)
    {
        printf("Sry!,the element is not found");
    }

    return 0;
}

