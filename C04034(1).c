#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 10000

// lam lai lan 1
int main(){
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int fre[MAX_SIZE];
		int res[MAX_SIZE];
		int count = 0;
		
		int max = -1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] > max) {
				res[count++] = a[i];
				max = a[i];
			}
		}
		

		for (int i = count - 1; i >= 0; i--) {
			printf("%d ", res[i]);
		}
		printf("\n");
	}
	
	
	return 0;
}