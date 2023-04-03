#include <stdio.h>
#include <math.h>


int isPrime(int n) {
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
int main() {
	int test;
	scanf("%d", &test);
	
	while (test--) {
		long long l, r;
		scanf("%lld %lld", &l, &r);
		int sqrtL = sqrt(l);
		int sqrtR = sqrt(r);
		int count = 0;
		for (int i = sqrtL; i <= sqrtR; i++) {
			if (isPrime(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}