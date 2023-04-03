#include <stdio.h>
#include <math.h>

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

void prime_pairs(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (is_prime(i) == 1 && is_prime(n - i) == 1) {
			printf("%d %d ",i, n - i);
		}
	}
}

// lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		prime_pairs(n);
		printf("\n");
	}
	
	return 0;
}