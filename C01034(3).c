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
	int m, n;
	scanf("%d %d", &m, &n);
	int sqrtM = sqrt(m);
	int sqrtN = sqrt(n);
	if (sqrtM * sqrtM != m) {
		sqrtM++;
	}
	int count = sqrtN - sqrtM + 1;
	printf("%d\n", count);
	for (int i = sqrtM; i <= sqrtN; i++) {
		printf("%d\n", i * i);
	}
	return 0;
} 