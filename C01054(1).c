#include <stdio.h>
#include <math.h>
int divisor(int n) {
	int res = 0;
	while (n % 2 == 0) {
		res += 2;
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i+=2) {
		while (n % i == 0) {
			res += i;
			n /= i;			
		}
	}
	if (n != 1) {
		res += n;
	}
	return res;
	
}
int main () {
	int test;
	scanf("%d", &test);
	long long res = 0;
	int a[test];
	for (int i = 0; i < test; i++) {
		scanf("%d", &a[i]);
		res += divisor(a[i]);
	}
	printf("%lld", res);
}