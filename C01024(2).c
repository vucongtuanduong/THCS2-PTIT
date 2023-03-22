#include <stdio.h>
#include <math.h>

int check(int n) {
	int num_digits = (int)log10(n);
	int last_digit = n % 10;
	int first_digit = (int)n / (pow(10, num_digits));
	if (first_digit == last_digit) {
		return 1;
	} else {
		return 0;
	}
}

// lam lai lan 2
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		if (check(n) == 1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
} 