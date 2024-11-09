#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int searchElement, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element found.\n");
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}