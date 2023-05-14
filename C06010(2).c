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
int check_even(char num[]) {

	for (int i = 0; i < strlen(num); i++) {
		if ((num[i] - '0') % 2 !=  0) {
			return 0;
		}
	}
	return 1;
}
void check(char num[]) {
	if (check_even(num) && is_palindrome(num)) {
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