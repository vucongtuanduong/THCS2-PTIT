#include <stdio.h>
#include <math.h>

int check(long long n) {
	int x = n % 10;
	while (n > 0) {
		int digit = n % 10;
		if (digit > x) {
			return 0;
		} else {
			x = digit;
			n /= 10;
		}
			
		} 
	return 1;
	}
	


// lam lai lan 1
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		if (check(n)) {
			printf("YES\n"); 
		} else {
			printf("NO\n");
		}
	}
	return 0;
} 