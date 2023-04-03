#include <stdio.h>

// lam lai lan 1(tren lop)
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		double res = 1.0 / n;
		printf("%.15f\n", res);
	}
	
	return 0;
}
