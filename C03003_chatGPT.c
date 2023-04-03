// C program to list N prime numbers using Sieve of Eratosthenes
#include <stdio.h>
#include <stdbool.h>

// A function to print all prime numbers smaller than n
void printPrimes(int n)
{
    // Create a boolean array "isPrime[0..n]" and initialize
    // all entries it as true. A value in isPrime[i] will
    // finally be false if i is Not a prime, else true.
    bool isPrime[n+1];
    for (int i = 0; i <= n; i++)
        isPrime[i] = true;

    // Loop over each number from 2 to sqrt(n) and mark its multiples as false
    for (int p = 2; p*p <= n; p++)
    {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p] == true)
        {
            // Update all multiples of p as not prime
            for (int i = p*p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    // Count and print the primes smaller than n
    int count = 0;
    for (int p = 2; p <= n; p++)
       if (isPrime[p])
       {
          printf("%d ", p);
          count++;
       }
    
    printf("\nThere are %d primes smaller than or equal to %d\n", count, n);
}

// Driver program to test above function
int main()
{
   int N;
   printf("Enter N: ");
   scanf("%d", &N);
   printf("The first %d primes are:\n", N);
   printPrimes(N);
   return 0;
}