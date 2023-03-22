#include <stdio.h>
#include <math.h>

void prime_factor(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			printf("%d ", i);
			n /= i;
		}
	}
	if (n != 1) {
		printf("%d\n", n);
	} else {
		printf("\n");
	}
}

// lam lai lan 3
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		prime_factor(n);
	}
	return 0;
} 