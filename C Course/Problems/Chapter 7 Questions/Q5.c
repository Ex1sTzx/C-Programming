#include <stdio.h>

int count(int a[], int n) {
    int positive_no = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0)
            positive_no++;
    }
    printf("Number of positive elements: %d\n", positive_no);
    return positive_no;
}
int main()
{
    int arr[] = {1, 5, 7, -3, -1, 11, -18, 6};
    count(arr,8);
    return 0;
}