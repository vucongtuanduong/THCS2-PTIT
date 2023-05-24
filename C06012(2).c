#include <stdio.h>
#include <math.h>
#include <string.h>
int is_prime(int n) {
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
int is_palindrome(char num[]) {
	int n = strlen(num);
	for (int i = 0; i < n; i++) {
		if (num[i] != num[n - i - 1]) {
			return 0;
		}
	}
	return 1;
}
int check_number(char num[]) {
	if (is_palindrome(num) == 0) {
		return 0;
	} else {
		for (int i = 0; i < strlen(num); i++) {
			if (is_prime(num[i] - '0') == 0) {
				return 0;
			}
		}
	}
	return 1;
}
void check(char num[]) {
	if (check_number(num)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char num[501];
		scanf("%s", num);
		check(num);
	}
}