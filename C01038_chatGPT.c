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

    swappedNum  = lastDigit; // Form swapped number
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}

/*
Read a number from the user and store it in a variable called num.
Find the last digit of num by using the modulo operator (%) and store it in a variable called lastDigit.
Find the total number of digits in num by using the logarithm function (log10) and store it in a variable called digits. Subtract 1 from digits to get the index of the first digit.
Find the first digit of num by using the power function (pow) and division operator (/) and store it in a variable called firstDigit.
Initialize a variable called swappedNum with the value of lastDigit. This will be used to form the swapped number.
Multiply swappedNum by 10 raised to the power of digits. This will place lastDigit at the first position of swappedNum.
Add to swappedNum the remainder of num divided by 10 raised to the power of digits. This will append all the middle digits of num to swappedNum.
Subtract lastDigit from swappedNum. This will remove lastDigit from its original position in swappedNum.
Add firstDigit to swappedNum. This will place firstDigit at the last position of swappedNum.
Print num and swappedNum on separate lines.


*/
