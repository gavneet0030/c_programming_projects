//WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5(F-32)/9.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    printf("\nTemperature in Fahrenheit = %.2f°F\n", fahrenheit);

    return 0;
}
