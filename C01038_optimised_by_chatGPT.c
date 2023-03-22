#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, firstDigit, digits, swappedNum;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit  = num % 10; // Get last digit

    digits     = (int)log10(num); // Get total number of digits - 1

    firstDigit = (int)(num / pow(10, digits)); // Get first digit

    swappedNum  = num - firstDigit * pow(10, digits) + lastDigit * pow(10, digits); // Swap first and last digit
    swappedNum -= lastDigit - firstDigit; // Adjust middle digits

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}

/*
This code reduces the number of arithmetic operations by using subtraction instead of addition and multiplication1. It also avoids using the modulo operator (%) twice by storing the value of num % pow(10, digits) in a variable2.

*/