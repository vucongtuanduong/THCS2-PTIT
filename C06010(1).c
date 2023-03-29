#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_NUMBER_SIZE 500

int is_palindrome_string(char number[MAX_NUMBER_SIZE], int length) {
	
	for (int i = 0; i <= length / 2; i++) {
		if (number[i] != number[length - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int is_all_even(char number[MAX_NUMBER_SIZE], int length) {
	for (int i = 0; i < length; i++) {
		if ((number[i] - '0') % 2 != 0) {
			return 0;
		}
	}
	return 1;
}

int check(char number[MAX_NUMBER_SIZE], int length) {
	if (is_palindrome_string(number, length) && is_all_even(number, length)) {
		return 1;
	} else {
		return 0;
	}
}

//lam lai lan 1
int main () {
	int test;
	scanf("%d\n", &test);
	while (test--) {
		char number[MAX_NUMBER_SIZE];
		scanf("%s", number);
		int length = strlen(number);
		if (check(number, length)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}