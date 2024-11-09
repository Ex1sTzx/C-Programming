#include <stdio.h>

void reverse(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element of the array: ");
        scanf("%d", &array[i]);
    }
    printf("Original array: ");
    printArray(array, n);
    printf("Reversed array: ");
    reverse(array, n);
    printArray(array, n);
    return 0;
}