//WAP that accepts marks of five subjects and finds percentage and prints grades cording to the following criteria:
//Between 90-100%----------------Print A 
//80-90%------------------------------Print 'B' 
//60-80%------------------------------Print C 
//Below 60%-------------------------Print 'D'





#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total, percent;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percent = (total / 500) * 100;

    printf("\nPercentage = %.2f%%\n", percent);

    if (percent >= 90)
        printf("Grade: A\n");
    else if (percent >= 80)
        printf("Grade: B\n");
    else if (percent >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");

    return 0;
}
