#include <stdio.h>
#include <math.h>

void factorize(int n) {
	printf("%d = ", n);
	for (int i = 2; i <= sqrt(n); i++) {
		int count = 0;
		while (n % i == 0) {
			count++;
			n /= i;
		}
		if (count != 0 && n != 1) {
			printf("%d^%d * ", i, count);
		} else if (n == 1 && count != 0) {
			printf("%d^%d", i, count);
		}
	}
	if (n != 1) {
		printf("%d^1", n);
	}
	printf("\n");
}




// lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	
	int n;
	while (test--) {
		scanf("%d", &n);
		factorize(n);
	}
	
	return 0;
}