//WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.


#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, sum, percentage;

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate sum
    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate percentage (assuming each subject is out of 100)
    percentage = (sum / 500) * 100;

    // Display results
    printf("\nTotal Marks = %.2f", sum);
    printf("\nPercentage = %.2f%%\n", percentage);

    return 0;
}
