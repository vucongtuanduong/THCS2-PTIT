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


int is_coprime(int a, int b) {
	return (gcd(a, b) == 1);
}

void coprime_pairs(int a, int b) {
	for (int i = a; i <= b; i++) {
		for (int j = i; j <= b; j++) {
			if (is_coprime(i, j)) {
				printf("(%d,%d)\n", i, j);
			}
		}
	}
}

// lam lai lan 2
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	coprime_pairs(a, b);
	return 0;
}