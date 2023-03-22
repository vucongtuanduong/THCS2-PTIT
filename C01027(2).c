#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int gcd1(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return a;
}

// lam lai lan 2
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a, b));
	}
	return 0;
} 