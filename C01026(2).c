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

// lam lai lan 2
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		if (is_prime(n) == 1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
} 