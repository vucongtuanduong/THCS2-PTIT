#include <stdio.h>
#include <math.h>




// lam lai lan 2
int main() {
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		for (int i = 2; i <= sqrt(n); i++) {
			while (n % i == 0) {
				printf("%d ", i);
				n /= i;
			}
			
		}
		if (n != 1) {
			printf("%d", n);
		}
		printf("\n");
	}
	
	return 0;
}