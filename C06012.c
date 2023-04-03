#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_NUM_DIGITS 505

int is_palindrome(char number[], int length) {
	for (int i = 0; i < length / 2; i++) {
		if (number[i] != number[length - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int is_prime(char c) {
	int digit = c - '0';
	if (digit < 2) {
		return 0;
	} else {
		for (int i  = 2; i <= sqrt(digit); i++) {
			if (digit % i == 0) {
				return 0;
			}
		} 
	}
	return 1;
}

int check(char number[]) {
	int n = strlen(number);

	int sum = 0;
	if (is_palindrome(number, n) == 0) {
		return 0;
	} else {
		for (int i = 0; i < n; i++) {
			if (is_prime(number[i]) == 0) {
				return 0;
			}
		}
		
		return 1;
	}
	
}

int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char number[MAX_NUM_DIGITS];
		gets(number);
		if (check(number)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}