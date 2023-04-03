#include <stdio.h>
#include <math.h>

int check(int n) {
	int temp = -1;
	while (n > 0) {
		int digit = n % 10;
		if (digit <= temp) {
			return 0;
		}
		temp = digit;
		n /= 10;
	}
	return 1;
}


// lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int count = 0;
		for (int i = a; i <= b; i++) {
			if (check(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}