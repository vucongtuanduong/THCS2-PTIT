#include <stdio.h>
#include <stdlib.h>

// A function to check if a number is prime or not
int isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}

// A function to find and count prime numbers in an array
void findPrime(int arr[], int n)
{
    // A variable to store the frequency of each prime number
    int freq = 0;

    // A loop to iterate over the array elements
    for (int i = 0; i < n; i++)
    {
        // Check if the current element is prime or not
        if (isPrime(arr[i]))
        {
            // Increment the frequency of the prime number
            freq++;

            // Print the prime number and its frequency
            printf("%d xuat hien %d lan\n", arr[i], freq);

            // Reset the frequency for the next prime number
            freq = 0;
        }
        else
        {
            // Increment the frequency of the non-prime number
            freq++;
        }
    }
}

// The main function
int main()
{
    int t;      // The number of test cases
    int n;      // The size of each array

    scanf("%d", &t);   // Read the number of test cases

    while (t--)
    {
        scanf("%d", &n);   // Read the size of each array

        int *arr = malloc(n * sizeof(int));   // Allocate memory for each array

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);   // Read each array element
        }

        findPrime(arr, n);   // Call the function to find and count prime numbers

        free(arr);   // Free the memory allocated for each array
    }

    
}