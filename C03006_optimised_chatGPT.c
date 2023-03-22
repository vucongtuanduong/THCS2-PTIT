#include <stdio.h>
#include <math.h>

// A function to print prime factors of a number
void print_prime_factors(int num)
{
    int i; // Loop variable
    int count; // Count of each prime factor
    printf("Test %d: ", num); // Print test number

    // Divide num by 2 until it becomes odd
    count = 0;
    while (num % 2 == 0)
    {
        count++;
        num = num / 2;
    }
    if (count > 0)
        printf("2(%d) ", count); // Print 2 and its count

    // Divide num by odd numbers from 3 to sqrt(num) skipping multiples of 2,3 and 5
    i = 3;
    while (i * i <= num)
    {
        count = 0;
        while (num % i == 0)
        {
            count++;
            num = num / i;
        }
        if (count > 0)
            printf("%d(%d) ", i, count); // Print prime factor and its count

        // Increment i by wheel values: [4,2,4,2,4,6,...]
        if (i % 6 == -1 || i % 6 == +1) 
            i += (i +1) %4 +1; 
        else 
            i += (i +5) %6 +1; 
    }

    // If num is still greater than 1, then it is a prime factor itself
    if (num > 1)
        printf("%d(1) ", num);

    printf("\n"); // Print newline
}

int main()
{
   int t; // Number of test cases
   int n; // Input number for each test case

   scanf("%d", &t); // Read number of test cases

   while (t--)
   {
       scanf("%d", &n); // Read input number
       print_prime_factors(n); // Call function to print prime factors
   }

   return(0);
}