#include <stdio.h>
#include <math.h>
#include <string.h>

int is_prime(int n) {
	if (n < 2) {
		return 0;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}
int main () {
	int n;
	scanf("%d", &n);
	int sum = 0;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= i; j--) {
			if (is_prime(a[i][j])) {
				sum += a[i][j];
			}
		}
	}
	printf("%d\n", sum);
	
	return 0; 
}