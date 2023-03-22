#include <stdio.h>
#include <math.h>

long long lcm(long long a, long long b) {
	long long m = a; 
	long long n = b;
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}	
	return m * n / a;
} 

//lam lai lan 2
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		long long i = 1;
		long long res = 1;
		while (i <= n) {
			res = lcm(i, res);
			i++;
		}
		printf("%lld\n", res);
	}
	return 0;
}