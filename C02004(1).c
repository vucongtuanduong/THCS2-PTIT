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
		if (i == 0 || i == n - 1) {
			for (int k = 0; k < n; k++) {
				printf("*");
			}
		} else {
			for (int k = 0; k < n; k++) {
					if (k == 0 || k == n - 1) {
					printf("*");
				} else {
					printf(".");
				}
			}
			
		}
		printf("\n");
	}
	
	return 0;
}