#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void factorPrime(int n) {
	printf("%d = ", n);
	for (int i = 2; i <= sqrt(n); i++) {
		int count = 0;
		while (n % i == 0) {
			count++;
			n /= i;
		}
		if (n != 1 && count > 0) {
			printf("%d^%d * ", i, count);
		} else if (n == 1 && count > 0) {
			printf("%d^%d ", i, count);
		}
	}
	if (n != 1) {
		printf("%d^1", n);
	}
}



//lam lai lan 1
int main(){
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		factorPrime(n);
		printf("\n");
	}
	
	return 0;
}