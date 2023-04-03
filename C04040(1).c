#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100000


// lam lai lan 1
int main() {
	int test;
	scanf("%d\n", &test);
	
	
	while (test--) {
		int n;
		scanf("%d", &n);
		long long maxSum = - 1000000;
		long long currentSum = 0;
		int a[n];
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			currentSum += a[i];
			if (currentSum < 0) {
				currentSum = 0;
			}
			if (maxSum < currentSum) {
				maxSum = currentSum;
			}
		}
		
		printf("%lld\n", maxSum);
	}
	return 0;
}