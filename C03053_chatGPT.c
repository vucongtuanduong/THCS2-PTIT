#include <stdio.h>

// A function to check if a number is prime or not
int isPrime(int n)
{
    // Corner cases
    if (n <= 1) return 0;
    if (n <= 3) return 1;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}

// A function to print all pairs of prime numbers
// whose sum is equal to a given even number
void printPrimePairs(int n)
{
    // Loop from 2 to n/2
    for (int i = 2; i <= n / 2; i++)
    {
        // Check if both i and n-i are prime
        if (isPrime(i) && isPrime(n - i))
        {
            // Print the pair
            printf("%d %d ", i, n - i);
        }
    }
}

// Main function
int main()
{
    int T; // Number of test cases
    int N; // Even number

    scanf("%d", &T); // Input number of test cases

    while (T--)
    {
        scanf("%d", &N); // Input even number

        printPrimePairs(N); // Print all pairs

        printf("\n"); // Print new line
    }

    return 0;
}
/*
	Define a function to check if a number is prime or not by using a loop and checking for factors.
Define another function to print all pairs of prime numbers whose sum is equal to a given even number by using another loop and calling the first function.
Take input from the user for the number of test cases and the even numbers for each test case.
Call the second function for each test case and print the output.




*/