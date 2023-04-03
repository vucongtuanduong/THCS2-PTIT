#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
	if (n < 2) {
		return 0;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}

long long reverse_number(long long n) {
	long long res = 0;
	while (n > 0) {
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int is_palindrome(long long n) {
	long long reversed = reverse_number(n);
	if (reversed == n) {
		return 1;
	} else {
		return 0;
	}
}

int check(long long n) {
	if (is_prime(n) && is_palindrome(n)) {
		return 1;
	} else {
		return 0;
	}
}

// lam lai lan 3
int main () {
	int test;
	scanf("%d", &test);
	
	while (test--) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		int count = 0;
		for (long long i = a; i <= b; i++) {
			if (check(i)) {
				printf("%lld ", i);
				count++;	
			}
			if (count == 10) {
				printf("\n");
				count = 0;
			}
		}
		printf("\n\n");

	}
	
	return 0;
}