//WAP that inputs two arrays and saves sum of corresponding elements of these arrays in third array.


#include <stdio.h>

int main() {
    int n, i;
    int a[100], b[100], c[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Sum of corresponding elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);

    printf("\n");
    return 0;
}
