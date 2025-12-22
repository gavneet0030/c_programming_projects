//WAP to convert binary number into decimal number and vice versa.


#include <stdio.h> 
int main()  {
    int bin, dec = 0, base = 1, rem; 
    printf("Enter binary number: "); 
    scanf("%d", &bin); 
    while(bin) { 
        rem = bin % 10; 
        dec += rem * base; 
        base *= 2; 
        bin /= 10; 
    } 
    printf("Decimal = %d\n", dec); 
    return 0; }
        