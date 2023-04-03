#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100000



int main() {
	
	int test;
	scanf("%d", &test);
	
	while (test--) {
		int n;
		scanf("%d", &n);
		int a[n];
		long long maxSum = -10000000;
		long long currentSum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			currentSum += a[i];
			if (currentSum > maxSum) {
				maxSum = currentSum;
			}
			if (currentSum < 0) {
				currentSum = 0;
			}
		}
		printf("%lld\n", maxSum);
	}
	
	return 0;
}


