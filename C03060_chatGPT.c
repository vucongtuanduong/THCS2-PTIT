#include <stdio.h>
#include <stdlib.h>

// A function to count trailing zeros in n!
int count_trailing_zeros(int n) {
    int count = 0;
    // Loop until n becomes zero
    while (n > 0) {
        // Divide n by 2 and add the remainder to count
        count += n % 2;
        // Right shift n by one bit
        n = n >> 1;
    }
    return count;
}

// A function to check if n! is divisible by 2^k
int check_divisibility(int n, int k) {
    // If k is zero, then any positive number is divisible by 1
    if (k == 0) return 1;
    // If k is greater than log2(n!), then it is not possible
    if (k > n) return 0;
    // Count the trailing zeros in n!
    int zeros = count_trailing_zeros(n);
    // If zeros are greater than or equal to k, then it is divisible
    if (zeros >= k) return 1;
    // Otherwise, it is not divisible
    else return 0;
}

int main() {
    int n, k;
//    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &k);
    
    // Check the divisibility and print the result
    int result = check_divisibility(n, k);
    
    if (result == 1) printf("Yes\n");
    
else printf("No\n");
    
return 0;

}