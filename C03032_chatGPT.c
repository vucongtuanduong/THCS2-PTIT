#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// A function that returns true if n is prime and false otherwise
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// A function that returns true if all digits of n are prime and false otherwise
bool are_digits_prime(int n) {
    while (n > 0) {
        int d = n % 10; // get the last digit
        if (!is_prime(d)) return false; // check if it is prime
        n /= 10; // remove the last digit
    }
    return true;
}

int main() {
    int t; // number of test cases
    scanf("%d", &t);
    
    while (t--) {
        int a, b; // range [a,b]
        scanf("%d%d", &a, &b);
        
        int limit = b + 1; // limit for sieve algorithm
        
        bool prime[limit]; // array to store whether each number is prime or not
        
        // initialize all values to true except for 0 and 1
        for (int i = 0; i < limit; i++) {
            prime[i] = true;
        }
        
        prime[0] = false;
        prime[1] = false;
        
        // apply sieve algorithm 
        for (int i = 2; i * i < limit; i++) {
            if (prime[i]) { // if i is still prime
                for (int j = i * i; j < limit; j += i) { // mark all multiples of i as composite
                    prime[j] = false;
                }
            }
        }
        
        int count = 0; // variable to store the count of numbers that satisfy the problem
        
        // loop from a to b 
        for (int i = a; i <= b; i++) {
            if (prime[i] && are_digits_prime(i)) { // check if both the number and its digits are prime 
                count++; // increment the count 
            }
        }
        
        printf("%d\n", count); // print the count 
    }
    
    return 0;
}