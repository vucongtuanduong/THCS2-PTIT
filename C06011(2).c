#include <stdio.h>
#include <string.h>
int is_palindrome(char num[]) {
	int n = strlen(num);
	for (int i = 0; i < n; i++) {
		if (num[i] != num[n - i - 1]) {
			return 0;
		}
	}
	return 1;
}
int check8(char num[]) {
	int n = strlen(num);
	if ((num[0] - '0') == 8 && (num[n - 1] - '0') == 8) {
		return 1;
	}
	return 0;
}
int sum_digits(char num[]) {
	int sum = 0;
	for (int i = 0; i < strlen(num); i++) {
		sum += (num[i] - '0');
	}
	return sum;
}
void check(char num[]) {
	int sum = sum_digits(num);
	if ((sum % 10 == 0) && is_palindrome(num) && check8(num)) {
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