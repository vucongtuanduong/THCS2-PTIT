#include <stdio.h>
#include <math.h>
#include <stdbool.h>


long long LCM(long long a, long long b) {
	long long temp;
	long long m = a;
	long long n = b;
	while (b != 0){
		temp = a % b;
		a  = b;
		b = temp;
	}
	return m * n / a;
}

int main() {
	int test;
	scanf("%d", &test);
	
	
	while (test--) {
		long long n;
		scanf("%lld", &n);
		long long lcm = 1;
		long long i = 1;
		
		while (i <= n) {
			lcm = LCM(i, lcm);
			i++;
		}
		printf("%lld\n", lcm);
	}
	
	
	return 0;
}