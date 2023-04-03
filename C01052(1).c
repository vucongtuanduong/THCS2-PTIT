#include <stdio.h>
#include <math.h>

int count_divisors(int n) {
	int count = 0;
	
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (i % 2 == 0) {
				count++;
			}
			int x = n / i;
			if ( x % 2 == 0 && i != x) {
				count++;
			}

		}
		
	}
	return count;
}

// lam lai lan 1
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", count_divisors(n));
	}
	return 0;
} 