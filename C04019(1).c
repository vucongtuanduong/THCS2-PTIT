
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 30000





// lam lai lan 1
int main() {
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n; // length of array
		scanf("%d", &n);
		int a[n];
		int fre[MAX_SIZE] = {0};
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			fre[a[i]]++;
		}
		

		int max = fre[a[0]];
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] >= max) {
				max = fre[a[i]];
				
			}
		
		}
		
		for (int i = 0; i < n; i++) {
			if (fre[a[i]] == max) {
				printf("%d ", a[i]);
				fre[a[i]] = 0;
			}
		
		}
		printf("\n");
	}
	
	return 0;
}