#include <stdio.h>

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long r = a % b;
		a = b;
		b = r;
	} 
	return a;
}

long long lcd(long long a, long long b) {
	return a * b/ gcd(a, b);
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int a, b;
		scanf("%d %d", &a, &b);
		long long res = 1;
		for (long long i = a; i <= b; i++) {
			res = lcd(res, i);
			
		}
		printf("%lld\n", res);
	}
	return 0;
}