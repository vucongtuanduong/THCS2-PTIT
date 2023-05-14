#include <stdio.h>
int sum_digits(char num[]) {
	int sum = 0;
	for (int i = 0; i < strlen(num); i++) {
		sum += ((num[i] - '0'));
	}
	return sum;
}
void check(char num[]) {
	int sum = sum_digits(num);
	if (sum % 3 == 0) {
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