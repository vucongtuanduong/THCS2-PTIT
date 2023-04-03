#include <stdio.h>

// function to reverse a number
long long reverse(long long n) {
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// function to check if a number is divisible by 7
int is_divisible_by_7(long long n) {
    if (n % 7 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int t; // number of test cases
    scanf("%d", &t);
    while (t--) {
        long long n; // input number
        scanf("%lld", &n);
        int count = 0; // number of iterations
        while (count <= 1000) {
            if (is_divisible_by_7(n)) {
                printf("%lld\n", n);
                break;
            } else {
                n += reverse(n);
                count++;
            }
        }
        if (count > 1000) {
            printf("-1\n");
        }
    }
    return 0;
}
