#include <stdio.h>

// lam lai lan 1(tren lop)
int main () {
	int a, b;
	scanf("%d %d", &a, &b);
	if (b == 0) {
		printf("0");
	} else {
		int sum = a + b;
		int subtraction = a - b;
		long long product = a * b;
		double division = (double) a / b;
		int mod = a % b;
		printf("%d %d %lld %.2f %d", sum, subtraction, product, division, mod);
	}
	
	
	return 0;
}
