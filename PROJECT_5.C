//WAP that swaps values of two variables using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("\nAfter swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
