#include <stdio.h>
#include <stdbool.h>

// A function to print all prime numbers smaller than n
void sieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    for(int i = 0; i < n+1; i++)
        prime[i] = true;

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or 
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked. 
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          printf("%d\n",p);
}

// Driver Program to test above function
int main()
{
    int n;
    scanf("%d",&n); // input N from user
    printf("Following are the prime numbers smaller than or equal to %d\n", n);
    sieveOfEratosthenes(n);
    return 0;
}