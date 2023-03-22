#include <stdio.h>
#include <math.h>




// lam lai lan 1
int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			for (int j = 0; j <= i; j++) {
				printf("*");
			}
		} else {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || j == i) {
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