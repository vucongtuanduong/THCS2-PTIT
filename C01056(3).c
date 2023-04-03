#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check(long long n) {
	int temp = n % 10;
	while (n > 0) {
		int digit = n % 10;
		if (digit > temp) {
			return 0;
		} else {
			n /= 10;
			temp = digit;
		}
		
	}
	return 1;
}

// lam lai lan 3
int main(){
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
