//WAP that checks whether the two numbers entered by the user are equal or not.

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check equality
    if (num1 == num2)
        printf("\nBoth numbers are EQUAL.\n");
    else
        printf("\nNumbers are NOT equal.\n");

    return 0;
}
