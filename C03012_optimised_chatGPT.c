#include <stdio.h>
#include <math.h>

// function to check if a number is a perfect square
int isPerfectSquare(int x)
{
    int s = (int) sqrt(x); // find the square root of x
    return (s * s == x); // return true if x is equal to s squared
}

// function to check if a number is in Fibonacci sequence
int isInFibonacci(int x)
{
    // apply the property on x
    return (isPerfectSquare(5 * x * x + 4) || 
            isPerfectSquare(5 * x * x - 4));
}

// main function
int main()
{
//#pragma GCC optimize("O3") // instruct GCC compiler to apply aggressive optimizations

    int x; // input number
    scanf("%d", &x); // read input number

    printf("%d\n", isInFibonacci(x)); // print output

    return 0;
}