#include <stdio.h>
#include <math.h>

// lam lai lan 2
int main () {
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int max = -1;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > max) {
				max = a[i];
				count++;
			}
		}
		printf("%d\n", count);
	}
	
	
	return 0;
}