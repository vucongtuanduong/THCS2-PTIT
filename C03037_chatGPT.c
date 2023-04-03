#include <stdio.h>
int main()
{
    // Declare variables
    long long int n; // Input number
    int d; // Current digit
    int freq[10] = {0}; // Frequency array
    int i; // Loop variable

    // Read input number
    printf("Enter a number (up to 18 digits): ");
    scanf("%lld", &n);

    // Loop through each digit of the number
    while (n > 0)
    {
        // Get the last digit of n
        d = n % 10;

        // Increment the corresponding element in freq array
        freq[d]++;

        // Remove the last digit of n
        n = n / 10;
    }

    // Print output according to order of appearance of prime digits

   if (freq[2] > 0) 
       printf("2: %d\n", freq[2]); 

   if (freq[3] > 0) 
       printf("3: %d\n", freq[3]); 

   if (freq[5] > 0) 
       printf("5: %d\n", freq[5]); 

   if (freq[7] > 0) 
       printf("7: %d\n", freq[7]); 

   return(0);
}