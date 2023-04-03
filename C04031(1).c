#include <stdio.h>

#include <math.h>

// lam lai lan 1
int main() {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		printf("Test %d:\n", t);
		int n;
		scanf("%d", &n);
		
		int a[n];
		int sub[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sub[i] = 1;
		}
		
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] > a[j - 1]) {
					sub[i]++;
				} else {
					i = j - 1;
					break;
				}
			}
		}
		
		int max = -1;
		for (int i = 0; i < n; i++) {
			if (sub[i] > max) {
				max = sub[i];
			}
		}
		printf("%d\n", max);
		for (int i = 0; i < n; i++) {
			if (sub[i] == max) {
				for (int j = i; j < i + max; j++) {
					printf("%d ", a[j]);
				}
				printf("\n");
			}
			
		}
	}
	return 0;
}