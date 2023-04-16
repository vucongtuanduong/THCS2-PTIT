#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int is_palindrome(char input[MAX_LENGTH]) {
	int n = strlen(input);
	int count = 0;
	for (int i = 0; i <= (n - 1) / 2; i++) {
		if (input[i] != input[n - i - 1]) {
			count++;
		}
	}
	if ((n % 2 == 0 && count == 1) || (n % 2 == 1 && count <= 1)){
		return 1;
	}
	return 0;
}
int main () {
	int test;
	scanf("%d\n", &test);

	while (test--) {
		char input[MAX_LENGTH];
		gets(input);
		if (is_palindrome(input)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}