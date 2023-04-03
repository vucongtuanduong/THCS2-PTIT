#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <math.h>


void factorPrime(int n) {
	int x = n;
	printf("%d = ", x);
	for(int i = 2; i <= sqrt(n); i++) {
		int count = 0;
		while (n % i == 0) {
			count++;
			n /= i;
		}
		if (n != 1 && count > 0) {
			printf("%d^%d * ", i, count);
		} else if (n == 1 && count > 0) {
			printf("%d^%d", i, count);
		}
		
	}
	if (n != 1) {
		printf("%d^1", n);
	}
	printf("\n");
}

int main ()
{
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		factorPrime(n);
	}
    return 0;
}