#include <stdio.h>

// A function to count the number of divisors of a given number
int count_divisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

// A function to check if a given number is a semiprime
int is_semiprime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int j = n / i;
            if (count_divisors(i) == 2 && count_divisors(j) == 2) {
                return 1; // n is a semiprime
            }
        }
    }
    return 0; // n is not a semiprime
}

// A function to find the smallest semiprime greater than or equal to x
int find_next_semiprime(int x) {
    while (!is_semiprime(x)) {
        x++;
    }
    return x;
}

int main() {
    int t; // number of test cases
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int x; // input number
        scanf("%d", &x);
        int next_semiprime = find_next_semiprime(x);
        printf("%d\n", next_semiprime);
    }
    return 0;
}
