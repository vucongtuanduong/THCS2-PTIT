#include <stdio.h>
#define MAX 100 // maximum size of Fibonacci array

// function to create Fibonacci array
void createFibonacci(int fib[], int n)
{
    fib[0] = 0; // first Fibonacci number
    fib[1] = 1; // second Fibonacci number

    // loop to generate the remaining Fibonacci numbers
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

// function to check if a number is in Fibonacci array
int isInFibonacci(int fib[], int n, int x)
{
    // loop to traverse the Fibonacci array
    for (int i = 0; i < n; i++)
    {
        // if x matches with any element of Fibonacci array, return 1
        if (x == fib[i])
        {
            return 1;
        }
        // if x is greater than the current element of Fibonacci array, break the loop
        else if (x < fib[i])
        {
            break;
        }
    }
    // if x is not found in Fibonacci array, return 0
    return 0;
}

// main function
int main()
{
    int n = MAX; // size of Fibonacci array
    int fib[n]; // declare Fibonacci array

    createFibonacci(fib, n); // call function to create Fibonacci array

    int x; // input number
    scanf("%d", &x); // read input number

    printf("%d\n", isInFibonacci(fib, n, x)); // print output

    return 0;
}