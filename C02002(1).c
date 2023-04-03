#include <stdio.h>
#include <math.h>




// lam lai lan 1
int main() {
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			printf("~");
		}
		for (int k = 0; k < n; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}