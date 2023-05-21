#include <stdio.h>
#include <string.h>
#include <math.h>
int check_string(char s[]) {
	int l = strlen(s);
	for (int i = 0; i < l - 1; i++) {
		if (s[i] > s[i + 1]) {
			return 0;
		}
	}
	return 1;
}
int check_number(long long input) {
	int temp = input % 10;
	while (input > 0) {
		int digit = input % 10;
		if (digit > temp) {
			return 0;
		}
		temp = digit;
		input /= 10;
	}
	return 1;
}
void check(char s[]) {
	if (check_string(s)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		char s[19];
		scanf("%s", s);
		check(s);
	}
}