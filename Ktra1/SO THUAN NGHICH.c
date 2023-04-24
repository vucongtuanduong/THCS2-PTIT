#include <stdio.h>

int is_palindrome(long long n) {
	long long x = n;
	long long reverse = 0;
	while (n > 0) {
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	if (reverse == x) {
		return 1;
	} else {
		return 0;
	}
}

int main () {
	
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		if (is_palindrome(n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}