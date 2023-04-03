#include <stdio.h>

// Function to calculate Fibonacci number
int fib(int n)
{
    // Declare an array to store Fibonacci numbers
    int f[n+1];
    int i;

    // 0th and 1st number of the series are 0 and 1
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        // Add the previous two numbers in the series
        // and store it
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main ()
{
    int n;
    
    // Read input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if input is valid
    if (n < 0 || n > 92)
        printf("Invalid input.\n");
    
    else 
        printf("Fibonacci number at position %d is %d\n", n, fib(n));

    return 0;
}