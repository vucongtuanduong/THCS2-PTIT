#include <stdio.h>
#include <math.h>




// lam lai lan 1
int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int k = n - 1; k > i; k--) {
			printf("~");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
		
	}
	
	return 0;
}