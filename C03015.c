#include <stdio.h>
#include <math.h>
#include <stdbool.h>

long long divisor(long long n) {
	long long ans;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ans = i;
			while (n % i == 0) {
			n /= i;
			}
		}
		
	}
	
	if (n != 1){
		return n;
	} else {
		return ans;
	}
}

int main(){
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		long long res = divisor(n);
		printf("%lld\n", res);
	}
	
	return 0;
}