#include <stdio.h>
#include <math.h>
#include <stdbool.h>


long long fibo[92];
bool isFibo(long long n) {
	fibo [0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 92; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for(int i = 0; i < 92; i++) {
		if (n == fibo[i]) {
			return true;
		}
	}
	return false;
}

int main(){
	
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		if (isFibo(n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}