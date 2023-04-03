#include <stdio.h>
#include <string.h>
#include <math.h>

// A function that returns 1 if a digit is valid after splitting horizontally
int isValid(int digit) {
    return (digit == 0 || digit == 1 || digit == 8 || digit == 9);
}

// A function that returns the upper half of a digit after splitting horizontally
int upperHalf(int digit) {
    if (digit == 8 || digit == 9) {
        return 0;
    }
    else {
        return digit;
    }
}

// A function that splits a number horizontally and prints the result
void splitNumber(long long int num) {
    // A string buffer to store the result
    char buffer[20];
    // An index variable to keep track of the buffer position
    int index = 0;
    // A flag variable to indicate if the number is valid or not
    int flag = 1;
    
    // Loop through each digit of the number from right to left
    while (num > 0) {
        // Extract the last digit using modulo operation
        int lastDigit = num % 10;
        // Check if the last digit is valid or not
        if (!isValid(lastDigit)) {
            // If not, set the flag to zero and break out of the loop
            flag = 0;
            break;
        }
        else {
            // If yes, append its upper half to the buffer using ASCII conversion
            buffer[index++] = upperHalf(lastDigit) + '0';
        }
        // Divide the number by 10 to remove the last digit
        num /= 10;
    }
    
    // Terminate the buffer with a null character
    buffer[index] = '\0';
    
    // If the flag is zero, print INVALID
    if (flag == 0) {
        printf("INVALID\n");
    }
    else {
        // Reverse the buffer using string library function
        strrev(buffer);
        
        // Convert the buffer to an integer using math library function 
        int result = atoi(buffer);
        
        // If the result is zero, print INVALID 
        if (result == 0) {
            printf("INVALID\n");
        }
        else {
            // Otherwise, print the result 
            printf("%d\n", result);
        }
    }
}
// The main function
int main() {
    // Declare a variable to store the number of test cases
    int t;
    // Read the number of test cases from standard input
    scanf("%d", &t);
    // Loop through each test case
    while (t--) {
        // Declare a variable to store the input number
        long long int n;
        // Read the input number from standard input
        scanf("%lld", &n);
        // Call the splitNumber function with the input number as argument
        splitNumber(n);
    }
    // Return 0 to indicate successful termination of the program
    return 0;
}